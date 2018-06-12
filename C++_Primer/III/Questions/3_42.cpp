#include <iostream>
#include <vector>
int main(void)
{
    std::vector<int> vec(10, 5);
    int a[10];

    for (auto i = 0; i < vec.size(); ++i)
        a[i] = vec[i];

    return 0;
    
}