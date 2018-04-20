#include <iostream>
using namespace std;
int main(void)
{
    int *pi;
    int num = 0;

    pi = new int(1024);
    while (pi) {
        pi = new int;
        num++;
    }
    
    // 内存泄漏(memory leak),是很严重的问题,
    // 本机8G的内存(实际供用户态使用的比这少),在几秒钟之间,主机就死机了
    // 真正体验过之后,才明白C++编写程序,内存管理多么重要,听说RAII是神器

    cout << num << endl;

    // 多此一举,编译器会自动进行地址是否为空的检查,不需要人工处理.
    if (!pi)
        delete pi;

    return 0;
}