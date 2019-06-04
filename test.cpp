#include <iostream>
#include <string>
 
using namespace std;

class test
{
public:
    void hello() {
        cout << "test hello!n";
    };
    void lambda() {
        auto fun = [this]{ // 捕获了 this 指针
            this->hello(); // 这里 this 调用的就是 class test 的对象了
        };
        fun();
    }
};
 
int main()
{
    test t;
    t.lambda();
}