#include <iostream>
int main(void)
{
    int grade;

    std::cin >> grade;
    std::cout << ((grade > 90) ? "high pass" : 
                    (grade > 75) ? "pass" : 
                    (grade > 60) ? "low pass" :
                    "fail" )
            << std::endl;

    return 0;
}