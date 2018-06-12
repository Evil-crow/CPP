#include <iostream>
int main(void)
{
    int temp[] = {1, 3, 6, 7,};

    for (auto i : temp)
        std::cout << i << std::endl;
    
    for (int *ptr = temp; ptr != std::end(temp); ++ptr)
        *ptr = 0;
    
    for (auto i : temp)
        std::cout << i << std::endl;

    return 0;
}