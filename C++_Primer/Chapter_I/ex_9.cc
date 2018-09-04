/*
 * @filename:    ex_9.cc
 * @author:      Crow
 * @date:        09/04/2018 18:17:01
 * @description: Chapter_I: 1.9
 *          1.9: 使用while循环,进行叠加
 */

#include <iostream>

using std::cout;
using std::endl;

int main(void)
{
    int sum = 0;
    int num = 50;

    while (num <= 100)
        sum += num++;

    cout << "sum: " << sum << endl;

    return 0;
}

