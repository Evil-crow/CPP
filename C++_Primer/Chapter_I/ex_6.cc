/* 
 * Created By Crow
 * Date: Tue, 04/09/2018
 * Description: Chapter_I: 1.6
 *      1.6: 其中的错误在于, C++流对象在输入/出运算符后返回对象仍为流对象
 *           使用分号,无法得到流对象进行运算, 所以此处应该去掉分号即可 
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int v1 =- 2, v2 = 4;

    std::cout << "The sum of " << v1 //   ;
                                     //  ^^^
            << " and " << v2 //  ;
                             // ^^^
            <<" is " << v1 + v2 << std::endl;
}