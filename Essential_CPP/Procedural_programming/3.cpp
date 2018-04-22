#include <iostream>
#include <vector>
using namespace std;

bool inline is_ok(int num)
{
    return (num > 100 || num < 0) ? false : true;
}

void pentagonal(vector<int> &vec, int num)
{
    if (!is_ok(num)) {
        cerr << "Over range" << endl;
        exit(EXIT_FAILURE);
    }

    for (int i = 1; i <= num; ++i) {
        int temp = i*(3*i-1)/2;
        vec.push_back(temp);
    }
}

void display(const vector<int> &vec, const string &str)
{
    cout << "The line is: " << str << endl;
    for (int i = 0; i < vec.size( ); ++i)
        cout << vec[i] << " ";
    cout << endl;
}

int main(void)
{
    int num;

    cout << "Please input the num: ";
    cin >> num;

    vector<int> vec;
    pentagonal(vec, num);
    display(vec, "Pentagonal");

    return 0;
}


/*
 * 标程: 合理进行规划,从软件设计思路上考虑
 *       不要仅仅局限于所谓的"拆分"
 */


// void really_calc(vector<int> &vec, int pos)
// {
//     for (int i = vec.size( ) + 1; i <= pos; ++i)
//         vec.push_back(i*(3*i-1)/2);
// }

// inline bool calc_pantag(vector<int> &vec, int pos)
// {
//     if (pos > 100 || pos < 0) {
//         cerr << "Over range" << endl;
//         return false;
//     }
    
//     if (pos < vec.size( ))
//         really_calc(vec, pos);
//     return true;
// }