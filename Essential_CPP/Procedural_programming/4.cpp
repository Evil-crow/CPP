#include <iostream>
#include <vector>
using namespace std;

bool inline is_ok(int num)
{
    return (num > 100 || num < 0) ? false : true;
}

bool inline in_range(int pos, const vector<int> *vec)
{
    return (pos < 0 || pos > (*vec).size( )) ? false : true;
}

vector<int> *pentagonal(int num)
{
    static vector<int> vec;

    if (!is_ok(num)) {
        cerr << "Over range" << endl;
        exit(EXIT_FAILURE);
    }

    // 此处注意 i 循环变量的起始是 vec.size( ) + 1, 注意不要造成重复，push_back( )

    for (int i = vec.size( ); i <= num; ++i) {
        int temp = i*(3*i-1)/2;
        vec.push_back(temp);
    }

    return &vec;
}

int display(const vector<int> *vec, int pos)
{
    if (!in_range(pos, vec)) {
        cerr << "Over size" << endl;
        exit(EXIT_FAILURE);
    }

    return (*vec)[pos];
}

int main(void)
{
    int num, pos;

    cout << "Please input the num: ";
    cin >> num;

    vector<int> vec;
    const vector<int> *ptr = pentagonal(num);

    cout << "Please inout your pos: ";
    cin >> pos;
    cout << display(ptr, pos) << endl;

    return 0;
}

/* 标程：设计的时候,可以考虑给函数返回bool值,用来表示状态,
 *      当然,用返回值来进行通信也很重要,可以考虑外层函数,使用bool标识
 *      而内部继续用返回值
 */

// bool display(int pos, int &elem)
// {
//     if (!is_ok(pos)) {
//         cerr << "Over range" << endl;
//         return false;
//     }

//     const vector<int> *vec = pentagonal(pos);
//     elem = (*vec)[pos];
//     return true;
// }