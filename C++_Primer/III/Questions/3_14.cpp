#include <iostream>
#include <vector>
int main(void)
{
    int temp;
    std::vector<int> vec;
    while (std::cin >> temp)
        vec.push_back(temp);
    for (auto i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << std::endl;

    return 0;
}
