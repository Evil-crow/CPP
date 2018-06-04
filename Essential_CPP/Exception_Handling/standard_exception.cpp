#include <iostream>
#include <string>
#include <exception>
using namespace std;

int main(void)
{
    try {
        string *str = new string("Linux");         // 进行动态内存分配,失败抛出bad_alloc异常
        string *ptr = new (nothrow)string("Exception");   // 可以用nothrow限制即使失败也不抛出异常
    } catch(bad_alloc &ex) {    // bad_alloc异常对象
        ex.what();
    }

    // 所有异常都是基于exception抽象基类的, 我们写异常类是也进行继承exception,可以事半功倍,override许多抽象基类中的成员函数
}