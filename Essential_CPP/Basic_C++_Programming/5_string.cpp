#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string user_name;

    cout << "Hello, please input your name: ";
    cin >> user_name;
    if (user_name.size( ) <= 2) {
        cout << "Sorry, your name is out-style" << endl;
        exit(EXIT_FAILURE);
    }
    cout << user_name << " and... Goodbye" << endl;

    return 0;
}