#include <iostream>
#include <string>
int main(void)
{
    std::string str1;
    std::string str2;
    char flag;
    
    do {
        std::cin >> str1 >> str2;
        std::cout << (str1.size() > str2.size() ? str2 : str1) 
                << std::endl;
        std::cout << "Continue?(y/N) ";
        std::cin >> flag;
    } while (flag == 'y');
    
    return 0;
}