#include <iostream>
#include <vector>
int main(void)
{
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8};
    std::vector<int> vec(std::begin(array), std::end(array));

    for (auto &i : vec)
        i = (i % 2) ? i : i*2;

    for (auto i : vec)
        std::cout << i << " ";
    std::cout << std::endl;

    return 0;
}