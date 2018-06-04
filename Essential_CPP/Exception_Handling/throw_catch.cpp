#include <iostream>
#include <exception>
#include <string>
using namespace std;

class exception_temp {
public:
    exception_temp(string str, int size) : _str(str), _size(size) { ; }
    string _str;
    int  _size;
};

void throw_catch(void);

int main(void)
{   
    throw_catch();
    return 0;
}
void throw_catch(void)
{

    // try字句与catch字句相应相生
    // 注意进行异常抛出后,就会寻找对应的catch字句,若本层没有就会顺着函数调用链一步一步上溯
    // 如果知道main()顶层也没有catch字句, 就会被abort(), termite()等函数终止,C++要求每个异常都需要被处理
    try {
        throw exception_temp("Linux", 42); // 此处抛出异常,下面进行异常处理, 之后程序顺序进行,所以42是无法被抛出的
        throw 42;
    }
    catch(int error) {
        std::cout << "Catch int error: " << error << std::endl;
    }
    catch(exception_temp temp) {
        std::cout << "Catch exception Object: " << temp._str << std::endl;
    }
    catch(...) {
        std::cout << "Catch Other and clean: " << std::endl;
    }
}