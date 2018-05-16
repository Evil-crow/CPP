#include <iostream>
#include <string>
using namespace std;
class triangle {
public:
    // 此处提供了3个构造函数, 默认初始化, 含参数初始化,因为没有默认参数初始化,所以也不会产生编译错误,无法选择构造函数的问题
    triangle(void);
    triangle(triangle &rhs);
    triangle(int &, int &, string &);
private:
    int col;
    int row;
    string str;
};

triangle::triangle(void)
{
    col = 1;
    row = 1;
    str = "name";
}

triangle::triangle(int &_row, int &_col, string &_str)
{
    row = _row;
    col = _col;
    str = _str;
}

// member initialization list
// 此处使用的函数参数初始化列表, 有两个作用:
// 一, 相对值初始化,参数初始化列表发生在进入函数之前,而且可以减少开销
// 二, 如果此类中还包含了其他没有默认初始化的类, 那就只能使用参数初始化列表
// 而且, 初始化完毕, 构造函数体内就是, 空函数
// 另外要注意的一点就是: 关于参数初始化列表, 其中初始化的顺序,与列表顺序无关, 而是与成员声明顺序息息相关.

triangle::triangle(triangle &rhs) : col(rhs.col), row(rhs.row) , str(rhs.str) { ; }

int main(void)
{
    string str("xiyou");
    int k = 3;
    int &i = k;
    int &j = k;

    triangle a;
    triangle b(i, j, str);
    triangle c(b);

    return 0;
}