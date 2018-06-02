/*
 * @filename:    static_resolution.cpp
 * @author:      Crow
 * @date:        06/02/2018 21:36:39
 * @description:
 */

#include <iostream>
#include "Fibonacci.hpp"
#include "mat.h"

void test(num_sequence num, Fibonacci *ff, Fibonacci &fs)
{
    num.print();     // 此处的虚函数解析是失败的, 提供抽象类的实体是不能完成动态绑定的.

    /* 所以,需要实现的就是抽象类的指针或者引用,一方面也是因为,如果是抽象类对象
     * 那么, 它分配的空间是定的,不能进行扩展,如何实现不同抽象类的绑定
     * 所以,就使用指针或者引用了,至于使用抽象类的reference/pointer自然是因为多态性了
     */

    ff->print();
    fs.print();

    // 同时,如果此处传参传入一个派生类,那么只会保留抽象类的部分,即仅仅保留属于抽象基类的成员,其余的都会丢弃
    
    return;
}
