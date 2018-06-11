#include <iostream>
#include <string>
int main(void)
{
    std::string str;
    getline(std::cin, str);

    for (auto &c : str)
        c = 'X';
    std::cout << str << std::endl;

    return 0;
}
