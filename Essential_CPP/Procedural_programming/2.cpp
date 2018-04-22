#include <iostream>
#include <vector>
using namespace std;

void pentagonal(vector<int> &vec, int num)
{
    if (num > 100 || num < 0)
        cerr << "Over range!" << endl;

    for (int i = 1; i <= num; ++i) {
        int temp = i*(3*i - 1)/2;
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
 * 标程：进行合理化设计
 * bool作为返回值，合理计算，同时在main中进行vector的声明
 * 可以减轻开销,当然,使用静态变量也是很方便的做法
 */


// bool calc_pentag(vector<int> &vec, int num)
// {
//     if (num > 100 || num < 0) {
//         cout << "Over range" << endl;
//         return false;
//     }

//     for(int i = vec.size( ) + 1; i <= num; ++i)
//         vec.push_back(i*(3*i-1)/2);
    
//     return true;
// }

// void display_msg(vector<int> &vec, const string &str, ostream &os = cout)
// {
//     cout << endl << str << endl;

//     for (auto i : vec)
//         cout << vec[i] << " ";
//     cout << endl;
// }

// int main(void)
// {
//     vector<int> vec;
//     const string title = "Pentagonal line: ";

//     if (calc_pentag(vec, 3))
//         display(vec, title);
//     if (calc_pentag(vec, 5))
//         display(vec, title);
    
//     return 0;
// }