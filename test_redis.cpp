#include "redis.h"

int main(void)
{
	RedisConnect r;
	bool b = r.InitWithTimeout("127.0.0.1", 6379,1);
	if (!b)
	return -1;

	r.Set("testtimes",1);
	r.Set("float:pi", 3.14159265);
	r.Set("string","test");


	r.HashSet("hset", "myhash", "field1", 123.2342343);
	r.HashSet("hmset", "myhash", "field1",1111,"field2","f2");
	r.HashSet("hset", "myhash", "field1", 123.2342343);
	r.HashSet("hmset", "myhash", "field1", 1111, "field2", "f2");

	//wrong command
	r.HashSet("hset", "myhash", "field1",1, 123.2342343);
	r.HashSet("hmset", "myhash", "field1",1, 1111, "field2", "f2");

	return 0;
}


//教程网页
// https://www.cnblogs.com/itdef/p/8177713.html
// https://www.liangzl.com/get-article-detail-35446.html
// 实现按照这个
// https://www.cnblogs.com/raker/p/4368741.html

//cygwin
//https://my.oschina.net/maxid/blog/186506

// 20190612
// 尝试用vs2015版本测试
// https://blog.csdn.net/sinat_33508334/article/details/85077966
//https://blog.csdn.net/yi452873250/article/details/68066755