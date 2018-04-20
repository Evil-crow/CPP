#include <iostream>
#include <cstring>
using namespace std;
int main(void)
{
    char name[100];

    cout << "Hello, please input your name: ";
    cin >> name;
    if (strlen(name) <= 2) {
        cout << "Sorry, your name is out-style" << endl;
        exit(EXIT_FAILURE);
    }
    cout << name
         << "... and Goodbye"
         << endl;
    
    return 0;
}