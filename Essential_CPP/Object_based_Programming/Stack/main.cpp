#include <iostream>
#include "./stack.h"
using namespace std;
// 一个使用class中public接口的例子
void stack_test(stack &test)
{
    string str;
    while (cin >> str && !test.full())
        test.push(str);

    cout << "stack size: " << test.size() << endl;
    
    while (!test.empty()) {
        test.peek(str);
        cout << str << " ";
        test.pop(str);
    }
    
    cout << "stack size: " << test.size() << endl;
        
}
int main(void)
{
    // 此处是class-heap的前置声明,如果只是进行声明指针或者标识数据结构
    // 并不需要直接给出class的定义,也就是说,前置声明可以避免代码过于冗杂
    // 然而进行class内部成员访问的时候, 则必须要给出class的主体定义
    class heap;
    heap *k;

    stack test;
    stack_test(test);

    return 0;
}

