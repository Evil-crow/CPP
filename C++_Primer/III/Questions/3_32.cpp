/*
 * @filename:    3_32.cpp
 * @author:      Crow
 * @date:        06/12/2018 16:50:59
 * @description:
 */

#include <iostream>
#include <vector>
int main(void)
{
    std::vector<int> vec;
    int a[5] = {1, 2, 3, 4, 5};
    
    constexpr size_t size = sizeof(a)/sizeof(a[0]);
    int b[size];
    

    for (size_t i = 0; i < size; ++i)
        b[i] = a[i];

    for (size_t i = 0; i < size; ++i)
        vec.push_back(a[i]);

    puts("b: ");
    for (auto i : b)
        std::cout << i << std::endl;
    puts("vec: ");
    for (auto i : vec)
        std::cout << i << std::endl;

    return 0;
}
