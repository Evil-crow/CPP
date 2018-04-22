#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;
int max(int a, int b)
{
    return a > b ? a : b;
}

double max(double a, double b)
{
    return a > b ? a : b;
}

string max(string a, string b)
{
    return a.size( ) > b.size( ) ? a : b;
}

int max(vector<int> &vec)
{
    int max = vec[0];
    for (int i = 0; i < vec.size( ); ++i)
        if (vec[i] > max)
            max = vec[i];
    
    return max;
}

float max(vector<float> &vec)
{
    float max = vec[0];
    for (int i = 0; i < vec.size( ); ++i)
        if (vec[i] > max)
            max = vec[i];
    
    return max;
}

string max(vector<string> &vec)
{
    int size = 0;
    string max = vec[0];
    for (int i = 0; i < vec.size( ); ++i)
        if (vec[i].size( ) > size) {
            max = vec[i];
            size = vec[i].size( );
        }
    
    return max;
}

int max(int *array, int num)
{
    int max = array[0];
    for (int i = 0; i < num; ++i) {
        if (array[i] > max)
            max = array[i];
    }

    return max;
}

float max(float *array, int num)
{
    float max = array[0];
    for (int i = 0; i < num; ++i) {
        if (array[i] > max)
            max = array[i];
    }

    return max;
}

string max(string *array, int num)
{
    int size = 0;
    string max = array[0];

    for (int i = 0; i < num; ++i) {
        if (array[i].size( ) > size) {
            max = array[i];
            size = array[i].size( );
        }
    }

    return max;
}

int main(void)
{
    int a = 3, b = 4;
    float c = 5.6, d = 4.3;
    string e("Xiyou"), f("Linux");

    cout << max(a, b) << endl
         << max(c, d) << endl
         << max(e, f) << endl;

    vector<int> g = {1, 2, 3, 4, 5};
    vector<float> h = {1.2, 1.5, 5.6, 7.3, 4.5};
    vector<string> i = {"adas", "dasdqad", "XiyouLinuxGroup"};

    cout << max(g) << endl
         << max(h) << endl
         << max(i) << endl;

    return 0;
}

/* 标程: 平时多看看库函数,实现不讲
 *      多学习库函数,还是很有必要的
 *      比如下面的这几个函数
 */

// int max(const vector<int> &vec)
// {
//     return *max_element(vec.begin( ), vec.end( ));
// }

// int max(const int *array, int size)
// {
//     return *max_element(array, array+size);
// }