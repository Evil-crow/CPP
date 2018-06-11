/*
 * @filename:    3_4.cpp
 * @author:      Crow
 * @date:        06/11/2018 19:23:43
 * @description:
 */

#include <iostream>
#include <string>
int main(void)
{
    std::string s1, s2;
    
    std::cin >> s1 >> s2;
    
    // compare s1 , s2
    std::cout << (s1 > s2 ? s1 : s2) << std::endl;

    // compare s1.size, s2.size
    std::cout << (s1.size() > s2.size() ? s1 : s2) << std::endl;

    return 0;
}
