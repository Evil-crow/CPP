#include <iostream>
#include <algorithm>
#include <functional>
#include <vector>
using namespace std;

// 第一版: 实现将vector1中 < val的值拷贝进入vector2, 并且返回new vector
vector<int> less_than_val(const vector<int> &vec, int val)
{
    vector<int> new_vec;

    for (int i = 0; i < vec.size(); ++i)
        if (vec[i] > val)
            new_vec.push_back(vec[i]);
    
    return new_vec;
}

// 第二版: 跳出 < 的需求, 可以实现不同的需要, 借助函数指针来实现
vector<int> filter(const vector<int> &vec, int val, bool (*pred)(int, int))
{
    vector<int> new_vec;

    for (int i = 0; i < vec.size(); ++i)
        if (pred(vec[i], val))
            new_vec.push_back(vec[i]);
    
    return new_vec;
}

inline bool less_than(int a, int b)
{
    return a < b ? true : false;
}

inline bool greater_than(int a, int b)
{
    return a > b ? true: false;
}

// 第三版, 使用functional object来解除对函数指针的依赖

vector<int> filter_(const vector<int> &vec, int val, less<int> &lt)
{
    vector<int> new_vec;

    vector<int>::const_iterator iter = vec.begin();
    for (; (iter = find_if(iter, vec.end(), bind2nd(lt, val))) != vec.end(); ++iter)
        new_vec.push_back(*iter);
    // 通过bind2nd()来实现adapter(适配器)对functional object的修改

    return new_vec;
}

// 第四版: 使用模板来解除对vector的绑定
template <typename InputIterator, typename OutputIterator,
          typename ElemType,      typename Compare>
OutputIterator filter_template(InputIterator first, InputIterator last, OutputIterator out,
                                const ElemType &val, Compare pred)
{
    while ((first = find_if(first, last, bind2nd(pred, val))) != last) {
        cout << "found: " << *first << endl;
        *out++ = *first++; 
    }

    return out;
}

int main(void)
{
    int size = 8;
    int arr[] = {12, 8, 43, 0, 6, 21, 3, 7};
    vector<int> ivec(arr, arr+size);

    int arr2[8];
    vector<int> ivec_bak(size);

    filter_template(arr, arr+size, arr2, size, less<int>());
    filter_template(ivec.begin(), ivec.end(), ivec_bak.begin(), size, greater<int>());
}