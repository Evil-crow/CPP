#include <iostream>
#include <string>
#include <cstring>
using namespace std;

class triangle {
public:
    triangle(int row, int col, char *str);
    ~triangle(void);
    void display(void);
private:
    int row, col;
    char *str;
};

triangle::triangle(int _row, int _col, char *_str)
{
    row = _row;
    col = _col;

    str = new char[strlen(_str)];
    strcpy(str, _str);
}

triangle::~triangle(void)
{
    delete []str;
}

void triangle::display(void)
{
    cout << row << " " << col << " " << str << endl;
}

int main(void)
{
    char *ptr = "XiyouLinuxGroup";
    char str[] = "name";
    triangle a(3, 4, str);
    a.display();
    int temp = 4;
    if (temp > 0) {
        triangle b = a;
        b.display();
    }
    a.display();      // 此处的a对象中的str已经被delete掉了,原因就是memberwise_initialization的问题

    // 成员按顺序初始化,直接将a中私有的str赋值给b,b在块作用域结束之后,直接析构,导致之后a中的成员GG
    // 解决方法: copy constructor (拷贝构造函数)
    // 避免了成员逐一初始化的问题, 同时我们要注意的是: copy constructor时,也需要构造copy assignment operator

    return 0;
}



