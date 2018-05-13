#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main(void)
{
    set<int> test_set;                     // set是一系列的key集合
    vector<int> arr = {1, 1, 6, 6, 3, 4};

    test_set.insert(arr.begin(), arr.end());     // set同样支持单参数insert() 和多参数insert()
    set<int>::iterator first = test_set.begin();
    set<int>::iterator last = test_set.end();
    for (; first != last; ++first)
        cout << *first << " ";                // set默认插入后,是按照升序排列的, 而且其中是没有重复元素的,multiset除外
    cout << endl;

    return 0;    
}