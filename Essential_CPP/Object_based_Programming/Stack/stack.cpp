#include <iostream>
#include <vector>
#include <string>
#include "stack.h"
using namespace std;

bool stack::push(string val)
{
    if (full())
        return false;
    _stack.push_back(val);
    return true;
}

bool stack::pop(string &val)
{
    if (empty())
        return false;
    // 下面的写法就是STL用的不熟练的下场
    // val = *(--_stack.end());
    val = _stack.back();
    _stack.pop_back();
    return true;
}

bool stack::peek(string &val)
{
    if (empty())
        return false;
    //val = *(--_stack.end());
    val = _stack.back();
    return true;
}