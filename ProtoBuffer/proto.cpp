
// Generated by tool.  DO NOT EDIT!

#include "proto.h"

std::shared_ptr<google::protobuf::Message> CreateMsgById(int msgId)
{
	switch (msgId)
	{
		case MSG_ID_CLIENT_DISCONNECT:
		return std::shared_ptr<google::protobuf::Message>(new ClientDisconnect());
		case MSG_ID_CREATE_ROLE_REQ:
		return std::shared_ptr<google::protobuf::Message>(new CreateRoleReq());
		case MSG_ID_CREATE_ROLE_RSP:
		return std::shared_ptr<google::protobuf::Message>(new CreateRoleRsp());
		case MSG_ID_DISCONNECT_REQ:
		return std::shared_ptr<google::protobuf::Message>(new DisconnectReq());
		case MSG_ID_DISCONNECT_RSP:
		return std::shared_ptr<google::protobuf::Message>(new DisconnectRsp());
		case MSG_ID_ENTER_GAME:
		return std::shared_ptr<google::protobuf::Message>(new EnterGame());
		case MSG_ID_ENTER_GAME_RSP:
		return std::shared_ptr<google::protobuf::Message>(new EnterGameRsp());
		case MSG_ID_ENTER_SCENE_REQ:
		return std::shared_ptr<google::protobuf::Message>(new EnterSceneReq());
		case MSG_ID_ENTER_SCENE_RSP:
		return std::shared_ptr<google::protobuf::Message>(new EnterSceneRsp());
		case MSG_ID_GM_CMD:
		return std::shared_ptr<google::protobuf::Message>(new GmCmd());
		case MSG_ID_GM_CMD_RSP:
		return std::shared_ptr<google::protobuf::Message>(new GmCmdRsp());
		case MSG_ID_LOAD_ROLE_LIST_RSP:
		return std::shared_ptr<google::protobuf::Message>(new LoadRoleListRsp());
		case MSG_ID_LOGIN_REQ:
		return std::shared_ptr<google::protobuf::Message>(new LoginReq());
		case MSG_ID_LOGIN_RSP:
		return std::shared_ptr<google::protobuf::Message>(new LoginRsp());
		case MSG_ID_RPC_MSG:
		return std::shared_ptr<google::protobuf::Message>(new RpcMsg());
		case MSG_ID_RPC_MSG_RSP:
		return std::shared_ptr<google::protobuf::Message>(new RpcMsgRsp());
		case MSG_ID_TEST_REQ:
		return std::shared_ptr<google::protobuf::Message>(new TestReq());
	}
	return NULL;
}