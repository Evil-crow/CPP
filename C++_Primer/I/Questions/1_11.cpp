/*
 * @filename:    1_11.cpp
 * @author:      Crow
 * @date:        06/08/2018 13:45:37
 * @description:
 */

#include <iostream>
int main(void)
{
    int m, n;
    int l, r;

    std::cin >> m >> n;
    l = m > n ? n : m;
    r = m > n ? m : n;

    while (l <= r)
        std::cout << l++ << " ";
    std::cout << std::endl;

    return 0;
}
