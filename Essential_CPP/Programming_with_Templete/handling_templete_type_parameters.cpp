#include <iostream>
#include <string>
#include <vector>

template <typename elemType>
class btNode {
public:
    btNode();
    btNode(elemType temp);
private:
    elemType _val;
    int _cnt;
    btNode *_lchild;
    btNode *_rchild;
};

template <typename valType>
class binaryTree {
public:
    friend class btNode;
    binaryTree();
    binaryTree(const binaryTree &);
    ~binaryTree();
    binaryTree& std::operator= (const binaryTree &);
    friend std::ostream &operator<< (std::ostream &os = std::cout, btNode<valType> &bt);

    bool empty() { return _root = 0; }
    void clear();

private:
    btNode<valType> *_root;

    void copy(btNode<valType> *tar, btNode<valType> *src);
};

// 下面这种方法采用,参数初始化列表,对于复杂的类型很方便,减少一次拷贝,提高效率
btNode<std::string>::btNode(std::string str) : _val(str)
{
    _cnt++;
    _lchild = 0;
    _rchild = 0;
}


// 此种方法就是正常的处理方法,其实使用参数初始化或者直接拷贝都是可以的,但是一般内置类型以外的都用参数初始化列表
btNode<std::string>::btNode(std::string str)
{
    _val = str;
    _cnt++;
    _lchild = 0;
    _rchild = 0;
}

// 所以,我们建议统一使用参数初始化列表的形式进行初始化. 


// 对于operator运算符,我们一般会产生许多针对不同类型的运算符重载,所以就使用function template进行实现
template <typename T>
std::ostream &operator<< (std::ostream &os, btNode<T> &bt)
{
    os << bt._cnt << " " << bt._val << " " << endl;
}

