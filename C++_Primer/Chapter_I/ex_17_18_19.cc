/*
 * @filename:    ex_17_18_19.cc
 * @author:      Crow
 * @date:        09/05/2018 16:25:18
 * @description: Chapter_I: 1.17, 1.18, 1.19
 *          1.17: 理解if-else的控制流即可
 *          1.18: 测试即可,验证1.17的推断
 *          1.19: 使用if-else子句进行控制
 */

// 1.17
// 当输入的值都相等的时候, 只会打印: "${curval} occurs ${num} times"
// 当输入的值都不相等的时候, 则会分别打印一句来表示出现的次数

// 1.18
// 测试即可


// 1.19
#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int a, b;

    cin >> a >> b;
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;               // 可用std::swap(a, b); 优化
    } else {
        while (a < b) {
            cout << a++ << endl;
        }
    }

    return 0;
}
