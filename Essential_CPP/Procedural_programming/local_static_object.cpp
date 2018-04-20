#include <iostream>
#include <vector>
using namespace std;

vector<int> *fibo_elem(int pos)
{
    static vector<int> vec;                 // 静态局部变量,每次调用不用产生新的对象

    if (pos > 1024 || pos < 0)
        cerr << "Over range" << endl;

    if (pos == 1 || pos == 2)
        vec.push_back(1);
    for (int i = vec.size( ); i < pos; ++i)
        vec.push_back(vec[i - 1] + vec[i - 2]);

    return &vec;                            // 因为是静态变量,不会随着堆栈区释放,所以可以获取到地址并返回.
}

int main(void)
{
    return 0;    
}