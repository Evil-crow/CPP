/*
 * @filename:    for_example.cpp
 * @author:      Crow
 * @date:        06/11/2018 19:53:01
 * @description:
 */

#include <iostream>
#include <string>
#include <cctype>
int main(void)
{
    std::string s;
    getline(std::cin, s);

    decltype(s.size()) punct_num = 0;      // another declration: std::string::size_type punct_num = 0;
    for (auto c : s)
        if (ispunct(c))
            punct_num++;

    std::cout << "punct's num is: " << punct_num << std::endl;

    return 0;
}
