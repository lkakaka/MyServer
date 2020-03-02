
import Scene
import game.scene.game_player
import weakref
import logger
from proto.message import message


class GameScene:
    def __init__(self, service, scene_id):
        self.service = service
        self.scene_id = scene_id
        self.scene_obj = Scene.SceneObj(scene_id, self)
        self.player_dict = {}
        self.player_conn_dict = {}
        # print("scene obj =", self.scene_obj)

    def on_player_enter(self, conn_id, role_id, name):
        game_player = self.create_player(conn_id, role_id, name)
        self.player_dict[role_id] = game_player
        self.player_conn_dict[conn_id] = weakref.ref(game_player)
        logger.logInfo("$player enter scene, role_id:{}, name:{}", role_id, name)

    def create_player(self, conn_id, role_id, name):
        player_info = self.scene_obj.createPlayer(conn_id, role_id, name)
        game_player = game.scene.game_player.GamePlayer(player_info, self, conn_id, role_id, name)
        return game_player

    def remove_player(self, role_id, reason):
        player = self.get_player_by_role_id(role_id)
        if player is None:
            return
        # self.scene_obj.removePlayer()
        self.scene_obj.removeActor(player.actor_id)
        self.player_dict.pop(role_id, None)
        self.player_conn_dict.pop(player.conn_id, None)
        self.service.on_remove_player(player.conn_id)

        logger.logInfo("$remove player, reason:{}", reason)

    def tick_player(self, role_id, reason):
        player = self.get_player_by_role_id(role_id)
        if player is None:
            return
        self.remove_player(role_id, reason)
        msg = message.create_msg_by_id(message.MSG_ID_DISCONNECT)
        msg.reason = reason
        self.service.send_msg_to_client(player.conn_id, message.MSG_ID_DISCONNECT, msg)

    def get_player_by_conn_id(self, conn_id):
        weak_player = self.player_conn_dict.get(conn_id)
        if weak_player is None:
            return None
        return weak_player()

    def get_player_by_role_id(self, role_id):
        return self.player_dict.get(role_id)

    def on_recv_client_msg(self, conn_id, msg_id, msg_data):
        player = self.get_player_by_conn_id(conn_id)
        if player is None:
            logger.logError("$on_recv_service_msg error, not found player, msgId:{}", msg_id)
            return

        player.on_recv_client_msg(msg_id, msg_data)


