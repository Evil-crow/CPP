#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
int main(void)
{
    vector<int> vec;

    // 那么为什么会有这三种iterator得出现呢? 
    // 就是为了解除进行容器拷贝时, 所必须要保证容器大小足够的问题, 而对于空容器使用插入操作,则是十分有效率的.
    // 最重要的是, 跳脱了assignment运算符以及目的端容器需要足够大小的问题

    back_inserter(vec);           // 使用容器内置的push_back()进行插入操作
    inserter(vec, vec.end());     // 使用容器的insert()进行插入操作
    front_inserter(vec);          // 使用容器的push_front()进行插入操作, 用于list以及deque

    return 0;
}