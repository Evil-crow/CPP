#include <iostream>
#include <string>
#include <vector>
using namespace std;
class triangle {
public:
    int length(void) const {
        return _length;
    }
    int start_pos(void) const {
        return _start;
    }
    int get_elem(int pos) const ;

    bool next(int &val) const;
    void next_reset(void) {
        next_pos = _start - 1;
    }
private:
    int _length;
    int _start;
    mutable int next_pos;

    static vector<int> elem;
};

bool triangle::next(int &val) const
{
    if (val < _start + _length - 1)
        val = elem[next_pos++];             // 此处便是因为声明为const函数, 编译器检查next函数,发现其修改了调用者,Error,解决方法: mutable
    return false;
}

int triangle::get_elem(int pos) const
{
    return elem[pos - 1];
}

class BigClass {

};

class valclass {
public:
    valclass(BigClass &big_class) : _val(big_class) { ; };
    BigClass &get_bigclass(void) const;
private:
    BigClass _val;
};

// 此处语法无误,但是将const 的bigclass开放出去, 使得外部可以进行修改bigclass, 可以修改返回类型为const处理
BigClass &valclass::get_bigclass(void) const
{
    return _val;
}

// 另外一个办法就是,使用函数重载, 设置两个成员函数
/*
 * const bigclass &get_bigclass(void) const { return _val; }
 * bigclass &get_bigclass(void) { return _val; }
 * 这两种重载就可以实现需求了, const 与 non-const类型都可以实现
 */

// 对于上面triangle类,我们可以实现下面这个函数 sum()

int sum(const triangle temp) 
{
    if (!temp.length())
        return 0;
    
    int sum = 0, val = 0;
    while (temp.next(val)) {
        sum += val;
        val++;
    }
    
    return 0;
}
// sum() 函数看起来是很方便,但是,它还是修改了调用者的内容,但是我们可以这样来看,
// length, start_pos标识了这个类的属性, 但是next并非是其属性, 而只是其一个迭代变量
// 所以可以用 mutable关键字声明, 来标识next变量是一个可变的数据,从而完成sum(), 
// 此函数也只是修改了next的值, length, _start这些标识属性的变量也并未修改

// 同时C++语法规定: 在同一个作用域, 变量, 类名, 函数名不得重名
// 若参数名与类名相同的时候, 我们可以使用(作用域限定符/this指针), 不过还是不要重名的好