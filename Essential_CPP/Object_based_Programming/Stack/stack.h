#ifndef _STACK_H
#define _STACK_H

#include <vector>
#include <string>
using namespace std;

/* class的声明还是放在.h或者.hpp中的
 * 主体上有public, private两部分组成(protected暂且不论)
 * public:为公开接口,任何人都可以访问
 * private: 作为私有接口,只有类内部或者friend可以访问
 * 另外,所有menber-function必须在class内部给出声明,至于定义位置自行考虑
 * 在class内部给出的实现,默认为inline, 
 * 同其他函数一样,inline-member-function要放在.h中
 * non-member inline function同理
 * 至于non-inline member function, 可以在hpp中,也可以直接放在cpp实现代码中
 */

class stack {
private:
    vector<string> _stack;
public:
    bool push(string val);
    bool pop(string &val);
    bool peek(string &val);
    bool full(void) {
        return (_stack.size() == _stack.max_size());
    }
    bool empty(void) {
        return (_stack.size() == 0);
    }
    int size(void) {
        return _stack.size();
    }
};

#endif