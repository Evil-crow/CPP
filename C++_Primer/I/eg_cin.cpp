/*
 * @filename:    eg_cin.cpp
 * @author:      Crow
 * @date:        06/08/2018 11:22:20
 * @description:
 */

#include <iostream>
int main(void)
{
    std::cout << "Enter two numbers:" << std::endl;
    int v1 = 0, v2 = 0;
    std::cin >> v1 >> v2;
    std::cout << "V1 + v2 = " << v1 + v2 << std::endl;

    return 0;
}
