#include <iostream>
#include <vector>
using namespace std;
class Temp {
public:
    Temp(void) {
        index = 5;
    }
    bool is_temp(int);                // member-function
    void print(void);
    static bool static_is_temp(int);  // non-member-function
private:
    int index;
};

bool Temp::is_temp(int data)       // function defination
{
    cout << "This is an test "
        << data
        << endl;
}

bool Temp::static_is_temp(int data)
{
    cout << "This is an static test "
        << data
        << endl;
}

void an_example(void)
{
    bool (Temp::*ptf)(int);            // pointer to member function 
    bool (*static_ptf)(int);          // pointer to static member funciton
    static_ptf = Temp::static_is_temp;    // 静态成员函数可以取得左值
    ptf = &Temp::is_temp;                 // 非静态成员函数不可取得左值

    /* 实际上C中经常将函数名和函数取地址交叉使用,
     * 实际上是因为他们发生了隐式的类型转换, 函数名实际上应该指的是函数本体
     * 作为函数地址,只是一种类型转换的结果
     */

    /* 而在C++中就比较严格了, 非静态成员函数, 都是不可取得左值的
     * 也就是不能发生隐式类型转换, 之前说的是因为非成员函数(non-member-funciton),可以取得左值
     * 因此, 此处进行pointer to member function的指针,需要用上取地址运算符
     * 而且,pointer to member function 需要使用class scope限定符, 
     * 为什么,因为member function is class's member.
     * 此处也可以看出,成员函数, 成员静态函数, 友元函数之间的作用于区别了:
     * 成员函数: 严格属于类, 可以访问类中的数据
     * 静态成员函数: 属于类, 可以访问类中数据(仅仅静态变量), 但是解除了对象与类的绑定关系,也就是不需要对象调用
     * 友元函数: 使用上类似于静态成员函数, 但是他不属于类, 静态成员函数与友元函数使用时,可以通过传参来操纵对象中的成员
     */

    static_ptf(5);            // 静态成员函数可以直接取得左值
    Temp a;
    (a.*ptf)(5);        // 非静态成员函数,必须使用 .*运算符来进行pointer to member function的调用

    Temp *b;
    (b->*ptf)(7);       // 若声明为指针, 则使用 ->*
}

int main(void)
{
    an_example();

    return 0;
}