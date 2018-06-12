#include <iostream>
#include <vector>
int main(void)
{
    int a[] = { 1, 2, 3, 4, 5, };
    std::vector<int> vec(std::begin(a), std::end(a));

    return 0;
}