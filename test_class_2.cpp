// 赋值构造函数(数据成员中含有指针)测试

#include <iostream>

using namespace std;

class Test2 
{
private:
	int *p;
public:
	Test2(int i);		//构造函数
	~Test2(void);		//析构函数
	Test2(const Test2 &t); 	//赋值构造函数

	void show(void);
};

Test2::Test2(int i)
{
	cout << "构造函数" << endl;
	p = new(int);
	*p = i;
}

Test2::~Test2(void)
{
	cout << "析构函数" << endl;
	delete p;
}

Test2::Test2(const Test2 &t)
{
	cout << "赋值构造函数" << endl;
	p = new int;
    *p = *t.p; // 拷贝值
}

void Test2::show(void) 
{
	cout << "*p = " << *p << endl;
}

int main(void)
{
	Test2 t1(10);
    t1.show();

    Test2 t2 = t1;
    t2.show();

	return 0;
}