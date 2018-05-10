#include <iostream>
#include <vector>
using namespace std;
template <typename T>
T *find(const T *array, int size, const T &value)
{
    for (int i = 0; i < size; ++i)
        if (*array++ == value)
            return array;
    
    return 0;
}

template <typename T>
T *find_(const T *first, const T *last, const T &value)
{
    for (; first != last; first++)
        if (*first == value)
            return first;
    
    return 0;
}

// 调用时,需要注意,vector是可以为空的,反观array是不能为空的,所以需要对vector是否为空进行检测
// 同时藉此来返回正确的首尾地址
// 检测则是用inline函数
template <typename T>
inline T *find_start(const vector<T> &vec)
{
    return (vec.empty()) ? 0 : &vec[0];
}

template <typename T>
inline T *find_end(const vector<T> &vec)
{
    return (vec.empty()) ? 0 : &vec[vec.size()];
}

// 而从上面的方案抽象出来,就是用两个指针进行指向,即泛型指针(迭代器)