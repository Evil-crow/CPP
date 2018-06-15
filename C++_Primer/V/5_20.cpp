#include <iostream>
#include <string>
int main(void)
{
    std::string str, temp;
    bool flag = true;
    std::cin >> str;
    temp = str;
    while (std::cin >> str) {
        if (str == temp) {
            flag = false;
            break;
        }
        temp = str;
    }

    std::cout << (flag ? "Nothing" : str) << std::endl;

    return 0;
}