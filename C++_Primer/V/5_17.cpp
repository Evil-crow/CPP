#include <iostream>
#include <vector>
int main(void)
{
    std::vector<int> a = {0, 1, 1, 2, 8};
    std::vector<int> b = {0, 1, 1, 2, 3, 5, 8};

    auto x = a.size() > b.size() ? b : a;
    auto y = a.size() > b.size() ? a : b;

    bool flag = true;
    for (decltype(a.size()) i = 0, size = x.size(); 
        i != size; ++i)
        if (x[i] != y[i]) {
            flag = false;
            break;
        }
    
    std::cout << (flag ? "true" : "false") << std::endl;

    return 0;
}