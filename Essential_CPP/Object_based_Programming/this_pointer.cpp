#include <iostream>
class temp {
public:
    temp(void);
    temp &copy(const temp &other);
private:
    int cow;
    int rol;
};

// 实际上, C++编译器会给每个成员加上this指针指向
temp::temp(void)
{
    cow = 1;         //    #=> this->cow = 1;
    rol = 4;         //    #=> this->rol = 4;
}

temp &temp::copy(const temp &other)
{
    cow = other.cow;          // 此处同理, 也是隐式的this指针
    rol = other.rol;          // 而copy函数调用时, 也会变成 a = copy(b);   #=> copy(a, b);

    return *this;             // 返回对象,进行提领操作 (dereference)
}

