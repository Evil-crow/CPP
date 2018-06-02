/*
 * @filename:    RTTI.cpp
 * @author:      Crow
 * @date:        06/02/2018 21:50:21
 * @description:
 */

#include <iostream>
#include <string>
#include <vector>
#include <typeinfo>
#include "abstract_class.h"

const char * num_sequence::what_am_i()
{
    Fibonacci fib(12);
    num_sequence *ps = &fib;

    return typeid(*this).name();           // 我们可以使用typeid来获得其运行时的类型,然后返回对应的名字

    if (typeid(*ps) == typeid(Fibonacci))     // typeid运算符同样支持 == / != 运算
        ps->elem(64);     // ps->Fibonacci::elem(64);
        
        Fibonacci *pf = static_cast<Fibonacci *>(ps);      // 无条件转换, 有风险
        pf->elem(64);


    if (Fibonacci *pf == dynamic_cast<Fibonacci *>(ps))     // 我们使用有条件转换,失败返回0
        pf->elem(64);

}


