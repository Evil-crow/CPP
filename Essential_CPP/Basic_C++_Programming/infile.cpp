#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
    ifstream infile("./file_test");

    if (!infile)
        cerr << "Open the fdile Error" << endl;
    
    string month;
    int day, year;

    while (infile >> month) {
        infile >> day;
        infile >> year;
        cout << month << " "
             << day << " "
             << year << " "
             << endl;
    }

    return 0;
}