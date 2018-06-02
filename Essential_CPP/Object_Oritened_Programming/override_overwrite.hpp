#include <iostream>
#include <vector>
#include <string>
#include "./another_abstract_classs.hpp"
class Fibonacci : public num_sequence {
public:

    /* 此即为override,覆盖,是指在派生类中实现抽象基类的虚函数
     * 一定要严格使用返回值,参数相同的函数原型进行实现
     * 否则, 是无法完成覆盖,并且运行时的动态绑定也是会失效的
     * 另外, 派生类中virtual关键字并非是必须的
     */
    virtual const char * what_am_i() const {
        return "Finonacci";
    }
    
    // 此即为overwrite,重写,只派生类和基类中相同函数原型的不同实现,与override区别在于override针对于虚函数
    int length() const { return _beg_pos; }

};
