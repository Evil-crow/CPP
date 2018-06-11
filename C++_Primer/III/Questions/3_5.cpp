/*
 * @filename:    3_5.cpp
 * @author:      Crow
 * @date:        06/11/2018 19:28:02
 * @description:
 */

#include <iostream>
#include <string>
int main(void)
{
    std::string src, sum;

    while (std::cin >> src)
        sum += src + " ";

    std::cout << sum << std::endl;

    return 0;
}
