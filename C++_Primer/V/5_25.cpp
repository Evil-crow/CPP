#include <iostream>
#include <stdexcept>
int main(void)
{
    int i, j;
    while (std::cin >> i >> j) {
        try {
            if (j == 0)
                throw std::runtime_error("j == 0");
        } catch (std::runtime_error err) {
            char ch;
            std::cout << "j == 0" << std::endl;
            std::cout << "Continue?(y/N) ";
            std::cin >> ch;
            if (ch == 'y')
                continue;
            else
                exit(EXIT_FAILURE);
        }
        std::cout << "res: " << i / j << std::endl;
    }

    return 0;
}