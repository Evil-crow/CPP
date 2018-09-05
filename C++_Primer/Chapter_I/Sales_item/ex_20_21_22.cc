/* 
 * @filename: ex_20_21_22.cc
 * @author: Crow
 * @date: Wed, 05/09/2018
 * @description:  Chapter_I: 1.20, 1.21, 1.22
 *          1.20: 了解如何使用类库文件
 *          1.21: 使用类对象的方法完成任务
 *          1.22: 进行计数求和
 */

#include <iostream>
#include "Sales_item.h"         // 导入Sales类

using std::cin;
using std::cout;
using std::endl;

// 1.20: 使用重载的构造函数, 以及重载的 << 运算符
void load_print()
{
    Sales_item temp(cin);

    cout << temp << endl;
}

// 1.21: 使用重载 >> 运算符读入对象, 之后进行 + 运算并输出
void read_add()
{
    Sales_item A, B;

    cin >> A >> B;
    cout << (A + B) << endl;
}

// 1.22: 类似于1.21 不过是读入多个对象
void read_print()
{
    Sales_item temp, sum;

    while (cin >> temp)
        sum += temp;
    cout << sum << endl;
}

int main(void)
{
    load_print();
    read_add();
    read_print();

    return 0;
}