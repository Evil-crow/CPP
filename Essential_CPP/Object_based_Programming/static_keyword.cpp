#include <iostream>
#include <vector>
using namespace std;
/*
 * 此文件主要用来看看静态static关键字的用法
 * 简单地来说, 就两个使用的地方: 修饰变量, 修饰函数
 * 分别为静态变量, 静态成员函数
 * 此处要注意的就是: 静态成员函数和静态的外部函数是不同的.
 */
class elem {
public:
    static bool is_elem(int pos);             // static member function, static只要保存一份足矣,一般是在类的定义中.
    //...
private:
    static const int elem_num = 45;        // static varible. 对于const的静态类变量可以直接赋初值, VC++当年不支持.
    static vector<int> _elem;              // 同理, 静态局部变量,static关键字只要保存一份足矣
};

bool elem::is_elem(int pos)                // 静态成员函数定义, 静态成员函数存在的主要意义,是解除对象与non-static member function之间的绑定
{
    cout << elem::elem_num << endl;        // 对于静态类变量,只有一份,并非每个对象都会保存的数据,使用时需要加上class scope运算符
}

int main(void)
{
    elem::is_elem(5);                      // 如此来看,直接使用class scope运算符,可以解除成员函数和对象之间的绑定

    return 0;
}

// 上面的代码只是为了解释static关键字专门举出的例子,并不具备实际意义.