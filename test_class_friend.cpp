#include <iostream>

class TestClassFriend
{
private:
	int f ;
public:
	TestClassFriend(int i):f(i){}
	friend void getPrivateParam(TestClassFriend t);
};

void getPrivateParam(TestClassFriend t)
{
	std::cout << "the f = " << t.f << std::endl;	
}

int main()
{
	TestClassFriend t(123);
	getPrivateParam(t);

	return 0;
}