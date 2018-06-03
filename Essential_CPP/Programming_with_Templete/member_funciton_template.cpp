#include <iostream>
#include <string>

// 我么除了可以实现class template, 同样可以来实现 member function template, 直接写template就行
template <typename T>
class printIt {
public:
    printIt(T &os) : _os(os) { ; }
    
    // 此即为member template funciton, 我也知道娄巨巨为什么要说function template要hpp了
    template <typename elemType>
    void print(const elemType &data, char ch = '\n') {
        _os << data << ch;
    }
private:
    std::ostream &_os;
};

int main(void)
{
    printIt<std::ostream> print_it(std::cout);

    print_it.print(1);
    print_it.print("Linux");

    std::string str("C++");
    print_it.print(str);

    return 0;
}