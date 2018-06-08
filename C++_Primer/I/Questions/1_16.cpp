/*
 * @filename:    1_16.cpp
 * @author:      Crow
 * @date:        06/08/2018 20:20:07
 * @description:
 */

#include <iostream>
int main(void)
{
    int num, sum = 0;

    while (std::cin >> num) 
        sum += num;

    std::cout << "SUM is: " << sum << std::endl;

    return 0;
}
