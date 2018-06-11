#include <iostream>
#include <string>
#include <cctype>

void func_move(std::string &str);

void func_copy(std::string &str);

int main(void)
{
    std::string str;
    getline(std::cin, str);

    func_move(str);
    std::cout << str << std::endl;

    getline(std::cin, str);
    func_copy(str);
    std::cout << str << std::endl;

    return 0;
}

void func_move(std::string &str)
{
    if (str.empty())
        return ;
    for (decltype(str.size()) i = 0; i < str.size(); ++i)
        if (ispunct(str[i])) {
            for (decltype(str.size()) j = i; j < str.size(); ++j)
                str[j] = str[j+1];
            i--;
        }
}

void func_copy(std::string &str)
{
    decltype(str.size()) i = 0;

    for (auto &c : str)
        if (!ispunct(c))
            str[i++] = c;
    str[i] = '\0';
}
