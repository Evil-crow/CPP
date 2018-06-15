#include <iostream>
#include <string>
#include <vector>
int main(void)
{
    std::vector<std::string> vec;
    std::string word;

    while (std::cin >> word)
        vec.push_back(word);
    
    auto iter = vec.begin();
    std::string record = *iter++;
    auto num = 0, max = num;
    while (iter != vec.end()) {
        if (*iter == record) {
            num++;
            max = num > max ? num : max;
        } else {
            record = *iter;
            num = 1;
            max = num > max ? num : max;
        }
        ++iter;
    }

    if (max > 0)
        std::cout << "The max is " << record << " it is " << max << std::endl;
    else
        std::cout << "Nothing" << std::endl;
    
    return 0;
}