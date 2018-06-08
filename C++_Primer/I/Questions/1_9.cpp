/*
 * @filename:    1_9.cpp
 * @author:      Crow
 * @date:        06/08/2018 13:39:16
 * @description:
 */

#include <iostream>
int main(void)
{
    int times = 50, sum = 0;

    while (times <= 100)
        sum += times++;
    std::cout << "SUM of 50-100 = " << sum << std::endl;
    
    return 0;
}
