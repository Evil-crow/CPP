#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

/*
 * 先来说说函数模板, (此处目前仅涉及函数模板)
 * C++中为了实现函数的多样化实现,提供了函数重载, 函数模板的机制.
 * 函数模板主要是应用于进行函数设计时,函数主体基本不变,仅仅是类型发生变化时,
 * 我们可以通过模板机制,使得其中的elemtype/T等,仅仅作为占位符
 * 等正式使用时,会根据类型而生成一份合理的模板实例
 * 进而可以通过一份模板,来实现多种主体类似的函数实现
 */

template <typename T>
void display_msg(const string &str, vector<T> &vec) {
    for (auto i : vec)                     // 建议C++11, 的循环方式,类似于each方法的实现
        cout << str << i << endl;
}

int main(void)
{
    vector<int> a;
    vector<double> b;

    const string str("function template test: ");
    for (int i = 0; i < 5; ++i)
        a.push_back(i);
    display_msg(str, a);

    for (double i = 1.1; i < 5.0 ; ++i)
        b.push_back(i);
    display_msg(str, b);

    return 0;
}

/*
 * 既然上面提到过,函数重载和函数模板,那么这两者的区别:
 * 函数重载用于实现同名函数的不同实现,display_msg( ), 打印信息就会有多种不同的实现
 * 函数模板主要是应用于,进行主体类似,不同类型的设计(模板,模板的含义)
 * 也就是说,函数模板也是可以重载的,如下,就可以进行重载 overload_function_templete
 */

template <typename T>
void diaplay(const string &, vector<T> &);

template <typename T>
void display(const string &, list<T> &);