#include <iostream>
#include <string>
int main(void)
{
    int grade;

    std::cin >> grade;
    std::string result;
    if (grade > 90)
        result = "high pass";
    else if (grade > 75)
        result = "pass";
    else if (grade > 60)
        result = "low pass";
    else
        result = "fail";
    
    std::cout << result << std::endl;

    return 0;
}