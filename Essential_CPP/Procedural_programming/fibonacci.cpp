#include <iostream>
using namespace std;

bool fibo_elem(int pos, int &elem);

void print_queue(int pos);

int main(void)
{
    int pos;
    int elem;

    cout << "Please input your num: ";
    while (cin >> pos) {
        if (!fibo_elem(pos, elem)) {
            cerr << "Error!" << endl;
        }
        cout << "It's " << elem << endl;
        print_queue(pos);
    }

    return 0;
}

// 理论上,每次调用会声明vector对象,调用结束后又进行销毁,
// 为了避免不必要的开销,使用静态局部对象(local static object)
// 见local_static_object.cpp

bool fibo_elem(int pos, int &elem)            
{
    if (pos < 0 || pos > 1024) {
        cerr << "Over range" << endl;
        return false;
    }

    elem = 1;
    int num_f = 1, num_s = 1;
    for (int i = 3; i <= pos; ++i) {
        elem = num_f + num_s;
        num_f = num_s;
        num_s = elem;
    }

    return true;
}

void print_queue(int pos)
{
    if (pos < 0 || pos > 1024) {
        cerr << "Error, over range" << endl;
        return ;
    }

    cout << endl
         << "This is the fibonacci queue:"
         << endl;

    /*
     * 优化:
     *  活用switch-case中的break,此处代码可以这样写:
     *  switch (pos) {
     *      default:     
     *      case 2: cout << 1 << " "
     *      case 1: cout << 1 << " "
     * }
     * 即可实现Fibonacci数列的打印任务
     */
    
   switch (pos) {
        case 1: cout << 1 << " " << endl; break;
        case 2: cout << 1 << " " << 1 << " " << endl; break;
        default: cout << 1 << " " << 1 << " "; break;
    }
void print_meg(void);
    int elem, num_f, num_s;
    num_f = 1, num_s = 1;
    for (int i = 3; i <= pos; ++i) {
        elem = num_f + num_s;
        num_f = num_s;
        num_s = elem;
        cout << elem << " ";
    }
    cout << endl;
}