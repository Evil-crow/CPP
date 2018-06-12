#include <iostream>
#include <vector>
int main(void)
{
    std::vector<int> a;
    std::vector<int> b;

    for (int i = 0; i < 4; ++i)
        a.push_back(i);
    for (int j = 7; j > 0; --j)
        b.push_back(j);
    
    for (std::size_t i = 0; i < (a.size() > b.size() ? b.size() : b.size());
            ++i) {
        if (a[i] == b[i])
            continue;
        else {
            puts("Error");
            break;
        }
    }

    return 0;
}