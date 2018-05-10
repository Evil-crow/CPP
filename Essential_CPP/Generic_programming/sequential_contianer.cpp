#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <deque>
#include <algorithm>

// 常见的三种顺序型容器, vector,变长数组. list, 双向链表. deque, 双端队列.
void vector_test(void)
{
    // 下面为顺序型容器常见的5种初始化方式
    std::vector<std::string> first;                    // 初始化为空容器
    std::vector<std::string> second(100);              // 初始化为指定数目
    std::vector<std::string> third(100, "Linux");      // 初始化为指定数目,且元素相同
    std::string str[] = {"Xiyou", "Mobile", "Linux", "Group", "C++", "Java"}; 
    std::vector<std::string> fouth(str, str+3);        // 使用两个iterator进行初始化
    std::vector<std::string> fifth(third);             // 使用其他容器进行初始化

    std::cout << fouth.size() << std::endl;
    while (!fouth.empty()) {
        std::cout << fouth[fouth.size() - 1] << std::endl;
        fouth.pop_back();
    }
}

void list_insert(std::list<int> &list)
{
    std::cout << "Start insert: " << std::endl;
    int value1;
    
    std::cin >> value1;
    std::list<int>::iterator first = list.begin();
    std::list<int>::iterator last = list.end();
    std::list<int>::iterator it = std::find(first, last, 7);
    list.insert(it, value1);
    // 第一种插入方法: 在iterator位置插入指定元素. 并且返回iterator

    it = std::find(first, last, value1);
    list.insert(it, 3, 4);   // 3->4->4->4->value1->7
    // 第二种插入方法: 在iterator中插入count数量的value

    int arr[] = {10, 11, 12, 13, 14, 15};
    it = std::find(first, last, 4);
    list.insert(it, arr+3, arr+5); // // 3->13->14->15->4->4->4->value1->7
    // 第三种插入方法: 在iterator位置插入指定iterator之间的内容
}

void list_test(void)
{
    std::list<int> list;
    list.push_front(3);
    list.push_back(4);
    list.push_front(5);      // 5->3->4

    std::cout << "front: " << list.front() << std::endl;      // 5 
    std::cout << "back: " << list.back() << std::endl;        // 4

    list.pop_back(); // 5->3
    std::cout << "back: " << list.back() << std::endl;
    list.pop_front(); // 3
    std::cout << "front: " << list.front() << std::endl;
    list.push_back(7); // 3->7
    std::cout << "back: " << list.back() << std::endl;

    list_insert(list);
    std::cout << list.front();
    list.pop_front();
    while (!list.empty()) {
        std::cout << "->" << list.front();
        list.pop_front();
    }
}

void deque_test(void)
{
    std::cout << std::endl;

    std::deque<double> deque;
    std::deque<double>::iterator first = deque.begin();
    std::deque<double>::iterator last = deque.end();
    deque.push_back(2.0);
    std::cout << "first: " << *first << std::endl;
    deque.push_front(3.0);
    first = deque.begin();
    std::cout << "first: " << *first << std::endl;    // 由此证明first不是始终指向容器首位, 不会动态改变,需要重新调用first()

    deque.push_back(6.0);
    deque.push_back(7.0);    // 3.0 2.0 6.0 7.0

    // erase()的两种变形操作

    std::deque<double>::iterator it = std::find(first, last, 2.0);
    it = deque.erase(it);
    std::cout << "After erase: " << *it << std::endl;         // 证明erase后返回的是itterator的下一位置
    for (int i = 0; i < deque.size(); ++i)
        std::cout << deque[i] << " ";
    std::cout << std::endl;

    // 可以验证first, end的指向发生改变
    std::cout << "first: " << *first << std::endl;
    std::cout << "end: " << *last << std::endl;

    std::deque<double>::iterator it_back = std::find(deque.begin(), deque.end(), 7.0);
    // 时刻注意first, last的指向, 有必要的时候重新用begin, end进行容器首尾的获取.

    deque.erase(it, it_back);
    std::cout << "deque size: " << deque.size() << std::endl;
    for (std::deque<double>::iterator i = deque.begin(); i != deque.end(); ++i)
        std::cout << *i << " ";
    std::cout << std::endl;

}

int main(void)
{
    vector_test();
    list_test();
    deque_test();
    return 0;
}

// 此处是顺序型容器的基本操作,其中需要注意的就是关于容器操作时,
// 尤其是erase()操作, 会返回指向下一个位置的iterator, 很关键的使用,切记
// 另外就是链表型容器和数组型容器的区别, it = Contanier.erase(it) 基本上是没有错误的, 不用手动指向下一个位置
// 而且通用的操作对于不同的容器是不同的, 比如数组型容器vector, deque, (string)是可以erase(it, it+num)的形式的
// 但是,链表型容器就不可以了, 个中原因,稍微琢磨一下就懂了
// 另外,其中关键的一点是, [it_first, it_second), 半开半闭的理解十分重要.
// STL真特么的博大精深 !