#include <iostream>
#include <vector>
#include <string>
#include <cctype>

int main(void)
{
    std::string word;
    std::vector<std::string> vec;

    while (std::cin >> word)
        vec.push_back(word);

    for (std::vector<std::string>::size_type i = 0;
            i < vec.size(); ++i)
                for (auto &j : vec[i])
                    j = toupper(j);

    for (decltype(vec.size()) i = 0; i < vec.size(); ++i)
        std::cout << vec[i] << std::endl;

    return 0;
}
