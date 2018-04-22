#include <iostream>
#include <string>
using namespace std;


/*
 * 以下是display_msg( )函数的重载 overloaded_function
 * 重载函数,主要是用来降低命名的问题的,很多功能类似的函数,可以进行重载
 * 编译器自行根据参数列表和参数个数,寻找最匹配的函数
 * 切记: 重载函数,函数参数列表和参数个数一定要不同,返回值并不能作为区别重载的区分
 */


void display_msg(const string &);

void display_msg(const string &, int );

void display_msg(char );

int main(void)
{
    const string str("No such file or directory can be opened!");

    display_msg(str);
    display_msg('\n');
    display_msg(str, __LINE__);

    return 0;
}

void display_msg(const string &str)
{
    cout << "Error: " << str << endl;
}

void display_msg(const string &str, int line)
{
    cout << "Error: " << str << "in " << line << endl;
}

void display_msg(char ch)
{
    cout << ch;
}