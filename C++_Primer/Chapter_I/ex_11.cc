/*
 * @filename:    ex_11.cc
 * @author:      Crow
 * @date:        09/04/2018 18:23:46
 * @description: Chapter_I: 1.11
 *          1.11: ... range 判断一下大小于情况即可
 */     

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int a, b;

    cin >> a >> b;

    (a > b) ? std::swap(a, b) : (void)(0) ;          
    // 使用std::swap() 解决 a > b 的情况, 后面的void(0)是处理表达式的情况, 实现比较丑陋...
    for (auto i = a; i != b + 1; ++i)
        cout << i << endl;

    return 0;
}
