#include "redis.h"

bool RedisConnect::Init(const std::string& ip, int port) 
{
	if (nullptr != redisCon) {
		return false;
	}
	redisCon = redisConnect(ip.c_str(), port);
	if (redisCon->err) {
		std::cerr << "error code : " << redisCon->err << ". " << redisCon->errstr << std::endl;
		return false;
	}

	return true;
}

bool RedisConnect::HashSet(const std::string command,T head, Args... rest)
{
	std::stringstream ss;
	ss << command << " " << head << " " ;
	return HashSetInner(ss,rest...);
}

bool RedisConnect::Set(const std::string & key, const T& value)
{
	bool bret = false;
	std::stringstream ss;
	ss << "SET " << key << " " << value;
	std::string s;
	getline(ss, s);
	return Set(s);
}

bool RedisConnect::InitWithTimeout(const std::string& ip, int port, int seconds) 
{
	if (nullptr != redisCon) {
		return false;
	}
	struct timeval tv;
	tv.tv_sec = seconds;
	tv.tv_usec = 0;
	redisCon = redisConnectWithTimeout(ip.c_str(), port, tv);
	if (redisCon->err) {
		std::cerr << "error code : " << redisCon->err << ". " << redisCon->errstr << std::endl;
		return false;
		}
	return true;
}