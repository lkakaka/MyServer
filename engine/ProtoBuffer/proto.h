
// Generated by tool.  DO NOT EDIT!

#pragma once

#include "proto/scene.pb.h"
#include "proto/server_only/login_srv.pb.h"
#include "proto/login.pb.h"
#include "proto/role.pb.h"
#include "proto/server_only/common.pb.h"
#include "proto/test.pb.h"

#ifdef PROTO_BUFFER_EXPORT
#ifndef PROTO_BUFFER_API
#define PROTO_BUFFER_API __declspec(dllexport)
#endif
#else
#define PROTO_BUFFER_API
#endif

enum PROTO_MSG_ID {
	MSG_ID_ACTOR_BORN = 1,
	MSG_ID_ACTOR_DISSOLVE = 2,
	MSG_ID_CLIENT_DISCONNECT = 3,
	MSG_ID_CREATE_ROLE_REQ = 4,
	MSG_ID_CREATE_ROLE_RSP = 5,
	MSG_ID_DISCONNECT_REQ = 6,
	MSG_ID_DISCONNECT_RSP = 7,
	MSG_ID_ENTER_GAME = 8,
	MSG_ID_ENTER_GAME_RSP = 9,
	MSG_ID_ENTER_SCENE_REQ = 10,
	MSG_ID_ENTER_SCENE_RSP = 11,
	MSG_ID_GM_CMD = 12,
	MSG_ID_GM_CMD_RSP = 13,
	MSG_ID_LOAD_ROLE_LIST_RSP = 14,
	MSG_ID_LOGIN_REQ = 15,
	MSG_ID_LOGIN_RSP = 16,
	MSG_ID_MOVE_TO = 17,
	MSG_ID_RPC_MSG = 18,
	MSG_ID_RPC_MSG_RSP = 19,
	MSG_ID_SYNC_POS = 20,
	MSG_ID_TEST_REQ = 21,
	
};

typedef PROTO_MSG_ID MSG_ID;

PROTO_BUFFER_API std::shared_ptr<google::protobuf::Message> CreateMsgById(int msgId);
PROTO_BUFFER_API std::shared_ptr<google::protobuf::Message> createMessage(int msgId, char* data, int dataLen);