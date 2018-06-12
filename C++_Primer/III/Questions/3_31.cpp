/*
 * @filename:    3_31.cpp
 * @author:      Crow
 * @date:        06/12/2018 16:46:54
 * @description:
 */

#include <iostream>
int main(void)
{
    int a[10];

    int num = 0;
    for (auto &i : a)
        i = num++;

    for (auto i : a)
        std::cout << i << std::endl;

    return 0;
}
