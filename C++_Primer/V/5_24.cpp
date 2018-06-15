#include <iostream>
#include <stdexcept>
int main(void)
{
    int i, j;

    std::cin >> i >> j;
    if (j == 0)
        throw std::runtime_error("j == 0");
    auto res = i / j;
    
    return 0;
}