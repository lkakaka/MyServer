#include "TimeUtil.h"
#include "boost/date_time/posix_time/posix_time.hpp"

int64_t TimeUtil::getCurrentTime()
{
	boost::posix_time::ptime epoch(boost::gregorian::date(1970, boost::gregorian::Jan, 1));
	boost::posix_time::time_duration time_from_epoch = boost::posix_time::microsec_clock::universal_time() - epoch;
	return time_from_epoch.total_microseconds() / 1000;
}