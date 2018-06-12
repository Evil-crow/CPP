/*
 * @filename:    3_24.cpp
 * @author:      Crow
 * @date:        06/12/2018 11:37:10
 * @description:
 */

#include <iostream>
#include <vector>
int main(void)
{
    std::vector<int> vec;
    int temp;

    while (std::cin >> temp)
        vec.push_back(temp);

    auto begin = vec.cbegin();
    auto end = vec.cend();
    while (begin != end) {
        std::cout << *begin + *(begin + 1) << std::endl;
        begin += 1;
    }

    return 0;
}
