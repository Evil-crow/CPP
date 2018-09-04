/*
 * @filename:    ex_16.cc
 * @author:      Crow
 * @date:        09/04/2018 22:54:25
 * @description: Chapter_I: 1.16
 *          1.16: 使用 cin >> (int)  等价于 ~scanf("%d", &num);
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int num, sum;
    sum = 0;

    while (cin >> num)
        sum += num;
    cout << sum << endl;

    return 0;
}

