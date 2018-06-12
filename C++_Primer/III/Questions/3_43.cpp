#include <iostream>
#include <vector>
int ia[3][4] = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10, 11, 12},
};

void ver_range_for(int (*ia)[4], int n)
{
    for (auto i = 0; i < n; ++i) {
        for (auto j : ia[i])
            std::cout << j << " ";
        std::cout << std::endl;
    }
}

void ver_operator_index(int (*ia)[4], int n)
{
    for (auto i = ia; i != ia + n; ++i) {
        for (auto j = *i; j != *i + 4; ++j)
            std::cout << *j << " ";
        std::cout << std::endl;
    }
}

void ver_operator_std_func(int (*ia)[4], int n)
{
    for (auto i = ia; i != ia + n; ++i) {
        for (auto j = std::begin(*i); j != std::end(*i); ++j)
            std::cout << *j << " ";
        std::cout << std::endl;
    }
}

int main(void)
{
    ver_operator_index(ia, 3);
    ver_operator_std_func(ia, 3);
    ver_range_for(ia, 3);

    return 0;
}
