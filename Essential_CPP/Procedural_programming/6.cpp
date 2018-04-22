#include <iostream>
#include <vector>
#include <string>
//using namespace std;
template <typename T>
T max(T a, T b) {
    return a > b ? a : b;
}

template <typename T>
T max(vector<T> &vec) {
    T max = vec[0];
    for (int i = 0; i < vec.size( ); ++i)
        if (vec[i] > max)
            max = vec[i];
    
    return max;
}

template <typename T>
T max(T *array, int num) {
    T max = array[0];
    for (int i = 0; i < num; ++i)
        if (array[i] > max)
            max = array[i];

    return max;
}
int main(void)
{
    int a = 3, b = 4;
    float c = 5.6, d = 4.3;
    string e = "Xiyou";
    string f = "Linux";

    std::cout << max(a, b) << std::endl
              << max(c, d) << std::endl
              << max(e, f) << std::endl;

    vector<int> g = {1, 2, 3, 4, 5};
    vector<float> h = {1.2, 1.5, 5.6, 7.3, 4.5};
    vector<string> i = {"adas", "dasdqad", "XiyouLinuxGroup"};

    std::cout << max(g) << std::endl
              << max(h) << std::endl
              << max(i) << std::endl;

    return 0;
}