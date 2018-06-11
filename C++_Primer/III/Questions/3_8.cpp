#include <iostream>
#include <string>
int main(void)
{
    std::string str;
    getline(std::cin, str);

    decltype(str.size()) num = 0;
    while (num < str.size())
        str[num++] = 'X';

    std::cout << str << std::endl;

    for (auto c = 0; c < str.size(); ++c)
        str[c] = 'Y';
    std::cout << str << std::endl;

    return 0;
}
