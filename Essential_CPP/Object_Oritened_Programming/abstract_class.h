#ifndef _ABSTRACT_CLASS_H
#define _ABSTRACT_CLASS_H

#include <iostream>
#include <vector>

class test {
public:
    int             elem(int pos);                       // 获取指定元素
    void            get_max(int pos);                    // 最大元素的个数
    const char *    what_am_i(void);                    // 显示为何种数列
    std::ostream&   print(std::ostream &os = std::cout) const;     // 输出内容
    bool            check_integrity(int pos);            // 检查合法性
    static int      max_elems(void);                     // 支持的最大位置值
};

/* 在确定了支持的接口之后,就要开始区分type了,与派生类型有关的声明为virtual(虚函数), 派生类中重新实现
 * 与派生类型无关的就可以不声明为虚函数
 * 关于虚函数,要么给出其定义,要么声明为纯虚函数(pure virtual function), 即在后面 = 0
 * 确定好类型后, 便是分清楚访问属性的问题
 * public: 对任何都开放的公共接口
 * private: 仅供类内部实现的接口, 任何人都没有访问权限
 * protected: 仅供派生类进行访问的接口
 */


class num_sequence {
public:                      // 给外部开放的接口,所以为public.
    /* 此处提及抽象基类的构造/析构函数
     * 由于抽象基类其中存在纯虚函数, 所以并没有实际的对象实体
     * 纯虚函数,是指这个成员函数,派生类中会使用到,但是对于此类,没有实质意义的函数,因为纯虚函数是不完整的,所以抽象基类没有对象实体
     * 所以对于抽象基类,可以没有构造函数, 但是需要析构函数
     * 而且,建议为虚析构函数, (不建议为纯虚析构函数)
     * 因为,如果将 抽象基类指针指向派生类,进行对象释放时,调用的会是抽象基类的析构函数
     * 但是,实际上应该使用派生类的析构函数, 因此,我们需要将抽象基类的析构函数声明为虚析构函数,以完成动态绑定
     */
    virtual                      ~num_sequence() {}
    virtual int                  elem(int pos) const = 0;          // 可虚可不虚的函数
    virtual const char *         what_am_i(void) = 0;        // 同上
    static int                   max_elems(int pos) { return _max_elems; }     // 与派生类型无关,所以可以不虚
    virtual std::ostream &       print(std::ostream &os = std::cout) const = 0; // 与类型有关, 所以虚
protected:                     // 给子类实现使用,不对外开放
    virtual void            gen_elem(int pos) const = 0;               // 生成不同类型数列,肯定虚
    bool                    check_integrity(int pos);            // 检查合法性,与类型无关,不虚

    const static int        _max_elems = 1024;
};

#endif
