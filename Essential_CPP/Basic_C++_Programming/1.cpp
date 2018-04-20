#include <iostream>
#include <string>
using namespace std;
int main(void)
{
    string user_name;

    cout << "Hello ,please input your name: ";
    cin >> user_name;
    cout << "Hello " 
         << user_name
         << "... and Goodbye!"
         << endl;
    
    return 0;
}