#include <iostream>
#include <vector>
using namespace std;
class None {

};

class Temp {
    friend class None;               // 整个None类都是Temp类的友元, None类中的member function可以直接使用,不需要friend关键字
public:
    friend bool is_temp(int data);   // firend关键字表明,此函数可以访问对象中的数据,(private亦可). 且friend关键字保留一份即可
private:
    static vector<int> vec;
};

// 所谓友元,实质的目的是为了,使non-member-funciton有用相同的访问权限
// 而建立友元之外的另一个方案就是,提供public访问权限的函数.在non-member-funciton中直接使用这些public函数
