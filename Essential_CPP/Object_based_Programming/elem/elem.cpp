#include <iostream>
#include <vector>
#include "elem.hpp"
using namespace std;
int main(void)
{
    int num;  
    bool flag = true;
    
    while (flag) {
        cout << "input: ";
        cin >> num;
        cout << num
            << (elem::is_elem(num) ? " is " : "isn't ")
            << "in the vector"
            << endl;
        
        char ch;
        cout << "(y/N) ";
        cin >> ch;
        if (ch == 'N')
            flag = false;
    }
}