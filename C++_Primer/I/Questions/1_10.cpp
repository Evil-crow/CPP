/*
 * @filename:    1_10.cpp
 * @author:      Crow
 * @date:        06/08/2018 13:44:02
 * @description:
 */

#include <iostream>
int main(void)
{
    int n = 11;

    while(n)
        std::cout << --n << " ";
    std::cout << std::endl;

    return 0;
}
