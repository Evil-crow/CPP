#include <iostream>
#include <vector>
int main(void)
{
    std::vector<int> vec;
    int num;

    while (std::cin >> num)
        vec.push_back(num);

    for (decltype(vec.size()) i = 0; i < vec.size(); i += 2)
        std::cout << "sum is: " << vec[i] + vec[i + 1] << std::endl;

    for (decltype(vec.size()) i = 0, j = vec.size() - 1; i < j; ++i, --j)
        std::cout << "another sum is: " << vec[i] + vec[j] << std::endl;

    return 0;
}
