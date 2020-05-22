#include "Redis.h"
#include "Logger.h"

#define REDIS_CMD_LOG_BUFFER_LENTGH 1024

USING_DATA_BASE;

Redis::Redis(std::string ip, int port) : ip(ip), port(port)
{
	m_redisContext = redisConnect(ip.c_str(), port);
	redisEnableKeepAlive(m_redisContext);
	redisReply* reply = (redisReply*)redisCommand(m_redisContext, "hgetall test");
	parseReply(reply);
}

void Redis::parseReply(redisReply* reply) {
	switch (reply->type) {
	case REDIS_REPLY_INTEGER:
	{
		int x = reply->integer;
		break;
	}
	case REDIS_REPLY_DOUBLE:
	{
		double d = reply->dval;
		break;
	}
	case REDIS_REPLY_STRING:
	case REDIS_REPLY_ERROR:
	case REDIS_REPLY_STATUS:
	{
		std::string str;
		std::copy(reply->str, reply->str + reply->len, std::back_inserter(str));
		break;
	}
	case REDIS_REPLY_ARRAY:
	case REDIS_REPLY_MAP:
	case REDIS_REPLY_SET:
	{
		for (int i = 0; i < reply->elements; i++) {
			redisReply* subReply = reply->element[i];
			parseReply(subReply);
		}
		break;
	}
	}
}

std::shared_ptr<RedisReply> Redis::execRedisCmd(const char* format, ...)
{
	va_list ap;
	va_start(ap, format);
	redisReply* reply = (redisReply*)redisvCommand(m_redisContext, format, ap);
	char cmd[REDIS_CMD_LOG_BUFFER_LENTGH]{ 0 };
	vsnprintf(cmd, REDIS_CMD_LOG_BUFFER_LENTGH - 1, format, ap);
	va_end(ap);
	Logger::logInfo("$exec redis cmd, %s", cmd);
	if (reply == NULL) {
		Logger::logInfo("$exec redis cmd failed, %s", cmd);
		return NULL;
	}
	return std::make_shared<RedisReply>(reply);
}

