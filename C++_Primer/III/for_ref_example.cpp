#include <iostream>
#include <string>
#include <cctype>
int main(void)
{
    std::string s;
    getline(std::cin, s);

    for (auto &c : s)
        c = toupper(c);

    std::cout << s << std::endl;

    return 0;
}
