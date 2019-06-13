#include <iostream>
#include <ctime>

using namespace std;

void getSeconds(unsigned long *par);

int main()
{
    unsigned long sec = 0;

    cout << "Value of sec = :" << sec << endl;
    cout << "Value of &sec = :" << &sec << endl;
    cout << endl;
    getSeconds(&sec);

    // 输出实际值
    cout << "Number of seconds :" << sec << endl;

    return 0;
}

void getSeconds(unsigned long *par)
{
    cout << "Value of *par = :" << *par << endl;
    cout << "Value of par = :" << par << endl;
    cout << "Value of &par = :" << &par << endl;
    cout << endl;
    // 获取当前的秒数
    *par = time(NULL);
    cout << "Value of *par = :" << *par << endl;
    cout << endl;
    return;
}