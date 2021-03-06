#pragma once

#include <unordered_map>
#include <mutex>
#include "boost/asio.hpp"

//#include "GameUtil.h"
#include "../Common/ServerExports.h"


//typedef void (*TimerCallback)();
#define TimerCallback std::function<void(int)>

typedef struct
{
	TimerCallback m_callback;
	boost::asio::deadline_timer* timer;
	int interval;
	int loopCnt;
	int triggerCnt;
}Timer;

class SERVER_EXPORT_API TimerMgr
{
private:
	boost::asio::io_service* m_io;
	long m_curTimerId;
	std::unordered_map<long, Timer> m_timerMap;

	std::mutex m_timerMutex;
public:
	TimerMgr(boost::asio::io_service* io);
	long allocTimerId();
	long addTimer(int nextTime, int interval, int loopCnt, TimerCallback callback);
	void removeTimer(long timerId, bool needCancel);

	void onTimer(const boost::system::error_code& e, long timerId);

	static void initTimerMgr(boost::asio::io_service* io);
	static TimerMgr* getTimerInstance();
};

