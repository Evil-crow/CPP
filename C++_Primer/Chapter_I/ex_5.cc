/* 
 * Created By Crow
 * Date: Tue, 04/09/2018
 * Description: Chapter_I: 1.5
 *          1.5: 类似于1.4, 将输出分散,C++中流对象的返回结果仍然是流对象 
 */

#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main(void)
{
    int a, b;

    cin >> a >> b;
    cout << "a + b";
    cout << a + b;
    cout << endl;

    return 0;
}