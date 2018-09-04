/*
 * @filename:    ex_10.cc
 * @author:      Crow
 * @date:        09/04/2018 18:21:37
 * @description: Chapter_I: 1.10
 *          1.10: 递减打印10, 类似用法于++
 */

#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
    int num = 10;

    while (num)
        cout << num-- << endl;

    return 0;
}
