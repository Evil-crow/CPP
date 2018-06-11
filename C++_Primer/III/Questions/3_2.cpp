/*
 * @filename:    3_2.cpp
 * @author:      Crow
 * @date:        06/11/2018 19:19:56
 * @description:
 */

#include <iostream>
#include <string>
int main(void)
{
    std::string word, line;

//    while (std::cin >> word)
//        std::cout << word << std::endl;

    while (getline(std::cin, line))
        std::cout << line << std::endl;       // getline()读取'\n'后,进行丢弃.手动进行换行

    return 0;
}
