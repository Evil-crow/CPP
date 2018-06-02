#ifndef ANOTHER_ABSCTRACT_CLASS_HPP
#define ANOTHER_ABSCTRACT_CLASS_HPP
#include <iostream>
#include <vector>

/* 下面便是我们重新设计之后的抽象基类，这个抽象基类的设计与之前的抽象基类有所不同
 * 区别体现在：上一个设计是完全将类抽象，没有实现细节，将所有的不同实现都扔到派生类中解决
 *             而此类的设计模式则是：将所有公有部分抽象至基类，派生类所要实现的只是较少的的一部分
 * 两种设计是两种思路，主要还是根据经验来决定
 */
class num_sequence {
public:
    virtual ~num_sequence(void){}
    virtual const char * what_am_i() const = 0;
    int     elem(int pos) const;
    std::ostream & print(std::ostream &os = std::cout) const;

    int length() const { return _length; }             // 这都是公共接口，对象在外部可以直接调用的
    int beg_pos() const { return _beg_pos; }           // 同理
    static int max_elems() { return 64; }

protected:
    virtual void gen_elems(int pos) const = 0;
    bool         check_integrity(int pos, int size) const;

    num_sequence(int len, int bp, std::vector<int> &re)       // 作为抽象基类是不能有相对应对象的，所以这个构造函数只是为了派生类使用，因此放在protected，而非public
            : _length(len), _beg_pos(bp), _relems(re) {}

    int _length;                                       // 这些是为了派生类使用的
    int _beg_pos;
    std::vector<int> &_relems;
};


#endif // ANOTHER_ABSCTRACT_CLASS_HPP_INCLUDED
