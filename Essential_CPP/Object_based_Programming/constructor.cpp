#include <iostream>
using namespace std;
class Maitx {
public:
    Maitx(void);
    Maitx(int col = 1, int row = 1);
    ~Maitx(void);
private:
    int _col;
    int _row;
    double *_array;
};

// 对于C++种类的构造函数,不接收参数视为默认初始化
// 一般有两种形式:
// 1. 类内部进行初始化
Maitx::Maitx(void)
{
    _row = 1;
    _col = 1;
    _array = new double[_row * _col];
    cout << _row << " " << _col << endl;
}
// 对象定义后,调用构造函数进行初始化,构造函数可以被重载
// 这里的构造函数使用了默认初始化的操作
// 可以支持下面几种形式:
// Matrix(); Matrix(8); Matrix(8, 3);

Maitx::Maitx(int col, int row)
{
    _row = row;
    _col = col;
    _array = new double[_row * _col];
    cout << _row << " " << _col << endl;
}

// 2. 便是使用上面的默认参数的形式进行初始化

// 析构函数用于对象释放之后,进行资源的释放,类似STL的操作
// 析构函数不接收参数,所以不能被重载
Maitx::~Maitx(void)
{
    delete []_array;
}

int main(void)
{
    Maitx t = 8;     // 此处是使用constructor,并非是assignment operator

    //Maitx k;         // 正确的默认初始化形式
    Maitx j();       // 错误的调用形式, 因为C++要兼容C,所以t会被视为函数.什么都不会发生

    return 0;
}

// 此处切记, 当定义了默认参数形式的构造函数之后
// default constructor或与其产生冲突.! ! !,以默认参数形式为主考虑
// 反之,下面三种形式都是允许的
// Maitx(); Maitx(int row); Matix(int row, int col);
// 所以,一般进行选择的时候,在设计类的构造函数的时候最好不要同时是用构造函数的重载和带参数的构造函数，
// 即,要不仅仅使用重载,要不直接使用带默认参数的构造函数
