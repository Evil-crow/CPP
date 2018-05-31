#ifndef _ITERATOR_CLASS_H
#define _ITERATOR_CLASS_H
#include <iostream>
using namespace std;
class temp_iterator {
public:
    temp_iterator(int _index) : index(_index) {              // 通过初始化构造函数进行初始化
        ;
    }
    bool operator ==(const temp_iterator&) const;        // const表示此函数是const, 成员是不能被修改的
    bool operator !=(const temp_iterator&) const;
    int operator *(void) const;
    temp_iterator &operator++(void);                      // 前缀自增运算符
    temp_iterator operator++(int);                        // 后缀自增运算符 (int)参数自动生成,为0
private:
    int index;
};

bool temp_iterator::operator ==(const temp_iterator &ths) const
{
    return index == ths.index;
}

bool temp_iterator::operator !=(const temp_iterator &ths) const
{
    return (*this == ths);                    // 我们一般实现功能相同的函数,使用已经存在的成员函数
}

int temp_iterator::operator *(void) const
{
    return index;
}

temp_iterator &temp_iterator::operator ++(void)
{
    index++;

    return *this;
}

temp_iterator temp_iterator::operator++(int)
{
    temp_iterator temp = *this;

    index++;

    return temp;           // 所谓后缀,自身不变
}

#endif
