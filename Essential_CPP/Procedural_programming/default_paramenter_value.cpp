#include <iostream>
#include <vector>
#include <fstream>
using namespace std;

void display(vector<int> &vec, ostream &os = cout);

int main(void)
{
    return 0;
}
void display(vector<int> &vec, ostream os)
{
    os << "Hello World!" << endl;
}

/*
 * 默认参数列表,使得写过Ruby的我很舒服,
 * 如今的静态语言,也逐渐开始支持动态语言的便利特性了
 * 但是,默认参数列表,有两个坑点
 * 1. 默认参数列表从右边开始解释,所以,从右边开始的参数列表都要进行初始化
 * 2. 参数列表默认值只能指定一次,所以是在头文件还是函数实现中,成了一个问题
 *    我们一般的建议是,默认值放在头文件,(或者说: 函数原型[prototype]中)
 */