#include "../include/Logger.h"

#define FORMAT_BUFF_SIZE 1024


int Logger::initLog()
{
	log4cpp::Category& root = log4cpp::Category::getRoot();
	log4cpp::Category& sub = log4cpp::Category::getInstance("sub1");
#ifdef _DEBUG
	//root.setPriority(log4cpp::Priority::NOTSET);
	sub.setPriority(log4cpp::Priority::NOTSET);
#else
	root.setPriority(log4cpp::Priority::NOTICE);
	sub.setPriority(log4cpp::Priority::NOTICE);
#endif

	log4cpp::Appender* rootAppender = new log4cpp::DailyRollingFileAppender("MyServer", "Server.log");
	root.addAppender(rootAppender);
	log4cpp::Appender* subAppender = new log4cpp::OstreamAppender("MyServer", &std::cout);
	sub.addAppender(subAppender);

	log4cpp::PatternLayout* patternLayout = new log4cpp::PatternLayout();
	patternLayout->setConversionPattern("%d{%Y-%m-%d %H:%M:%S.%l} [%p] %m %n");
	rootAppender->setLayout(patternLayout);

	log4cpp::PatternLayout* subPatternLayout = new log4cpp::PatternLayout();
	subPatternLayout->setConversionPattern("%d{%Y-%m-%d %H:%M:%S.%l} [%p] %m %n");
	subAppender->setLayout(subPatternLayout);

	return 1;
}

bool Logger::isPrint(const char* fmt)
{
	if (NULL == fmt || strlen(fmt) <= 1)
		return false;
	return (fmt[0] == '$');
}

void Logger::formatLog(char* buff, const char* fmt, va_list va)
{
	_vsnprintf_s(buff, FORMAT_BUFF_SIZE-1, _TRUNCATE, fmt, va);
}

void Logger::logDebug(const char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	char buff[FORMAT_BUFF_SIZE]{ 0 };
	if (Logger::isPrint(fmt))
	{
		formatLog(buff, &fmt[1], args);
		log4cpp::Category& sub = log4cpp::Category::getInstance("sub1");
		sub.debug(buff);
	}else {
		formatLog(buff, fmt, args);
		log4cpp::Category& root = log4cpp::Category::getRoot();
		root.debug(buff);
	}
	va_end(args);
}

void Logger::logInfo(char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	char buff[FORMAT_BUFF_SIZE]{ 0 };
	if (Logger::isPrint(fmt))
	{
		formatLog(buff, &fmt[1], args);
		log4cpp::Category& sub = log4cpp::Category::getInstance("sub1");
		sub.notice(buff);
	}else {
		formatLog(buff, fmt, args);
		log4cpp::Category& root = log4cpp::Category::getRoot();
		root.notice(buff);
	}
	va_end(args);
}

void Logger::logError(const char* fmt, ...)
{
	va_list args;
	va_start(args, fmt);
	char buff[FORMAT_BUFF_SIZE]{ 0 };
	if (Logger::isPrint(fmt))
	{
		formatLog(buff, &fmt[1], args);
		log4cpp::Category& sub = log4cpp::Category::getInstance("sub1");
		sub.error(buff);
	}else {
		formatLog(buff, fmt, args);
		log4cpp::Category& root = log4cpp::Category::getRoot();
		root.error(buff);
	}
	va_end(args);
}

void Logger::test()
{
	log4cpp::Category& root = log4cpp::Category::getRoot();
	root.setPriority(log4cpp::Priority::NOTICE);
	log4cpp::Category& sub = log4cpp::Category::getInstance("sub1");

	log4cpp::Appender* rootAppender = new log4cpp::DailyRollingFileAppender("test", "test.log");
	root.addAppender(rootAppender);
	log4cpp::Appender* rootAppender1 = new log4cpp::OstreamAppender("test1", &std::cout);
	root.addAppender(rootAppender1);

	rootAppender->setThreshold(log4cpp::Priority::NOTICE);
	log4cpp::Appender* subAppender = new log4cpp::OstreamAppender("subtest", &std::cout);
	sub.addAppender(subAppender);

	//log4cpp::PropertyConfigurator::configure("logTest.Property");

	log4cpp::PatternLayout* patternLayout = new log4cpp::PatternLayout();
	patternLayout->setConversionPattern("%d{%Y-%m-%d %H:%M:%S.%l} %t [%c] [%p] %m %n");
	rootAppender->setLayout(patternLayout);
	log4cpp::PatternLayout* subPatternLayout = new log4cpp::PatternLayout();
	subPatternLayout->setConversionPattern("%d{%Y-%m-%d %H:%M:%S.%l} %t [%c] [%p] %m %n");
	subAppender->setLayout(subPatternLayout);

	root.notice("root1, %d,%s", 1, "1234");
	sub.notice("sub1");

	//Log::logInfo("$root1, %d,%s", 1, "1234");
}
