#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    vector<int> a, b;
    if (a == b)                    // == != 比较操作
        cout << "a == b" << endl;
    
    if (a.empty() || b.empty())    // empty判空操作
        cout << "a is empty || b is empty" << endl;
    
    a.push_back(3);

    vector<int> temp;
    temp = a.size() > b.size() ? a : b;    // = 赋值操作

    // 每个容器都有begin(), end()来进行迭代器的求取
    vector<int>::iterator a = temp.begin();   
    vector<int>::iterator b = temp.end();
    cout << temp.size() << endl;
    temp.clear();                         // clear()用来清除容器所有的元素
    cout << temp.size() << endl;

    return 0;
}