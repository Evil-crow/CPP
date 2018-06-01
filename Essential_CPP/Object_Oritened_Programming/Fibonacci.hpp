#include <iostream>
#include <vector>
#include <string>
#include "abstract_class.h"

class Fibonacci : public num_sequence {
public:
    Fibonacci(int len = 1, int beg_pos = 1)
        : _length(len), _beg_pos(beg_pos) { ; }

    virtual int     elem(int pos) const;
    virtual const char * what_am_i(void) const { return "Fibonacci"; }
    virtual std::ostream& print(std::ostream &os = std::cout) const;
    int length(void) const { return _length; }
    int beg_pos(void) const { return _beg_pos; }

protected:
    virtual void gen_elems(int pos) const;
    int _length;
    int _beg_pos;
    static std::vector<int> _elems;
    bool check_integrity(int pos) const;
};

std::ostream& Fibonacci::print(std::ostream &os) const
{
    int pos;
    Fibonacci::gen_elems(pos);    // 显式的使用 Fibonacci::gen_elems(),防止进行动态绑定,在编译期确定
}

int Fibonacci::elem(int pos) const         // 此处check_integrity()即为overwrite,重写
{
    if (check_integrity(pos))       // check_integrity为派生类定义,默认为Fibonacci, 基类调用时,需要显式使用class scope运算符
        ;

    return 0;
}

int main(void)
{
    int len = 3, beg_pos = 2;
    int pos = 5;
    num_sequence *ps = new Fibonacci(len, beg_pos);  // 因为没有进行覆盖.即基类虚函数在派生类中实现补不全,不能生成完整的对象. 

    ps->elem(pos);          // 动态绑定, 基类使用Fibonacci::elem()

    ps->max_elems(pos);    // 同上

    ps->what_am_i();

    ps->length();       // 失败,因为length(),为派生类中的内容,抽象基类不可见,不能进行动态绑定

    return 0;
}


// overload 重载,与另外两个区分比较大

// override 覆盖,指对抽象基类中的虚函数进行派生类处理

// overwrite 重写, 指派生类中的函数与基类函数重名,并且基类函数被隐藏,overwrite极易与override混淆