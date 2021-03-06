#pragma once

#include "zmq.h"
#include "Logger.h"
//#include "GameUtil.h"
#include "../Common/ServerExports.h"

#include <thread>
#include <functional>

class SERVER_EXPORT_API ZmqRouter {
private:
	static ZmqRouter* zmqRouter;
	void* zmq_context;
	void* m_socket;
	std::thread* work_thread;
	ZmqRouter();
	void run();
	void destory();
public:
	~ZmqRouter();

	static ZmqRouter* getZmqRouter();
	static void initZmqRouter(const char* name, int port);
	void startZmqRouter(const char* name, int port);
};
