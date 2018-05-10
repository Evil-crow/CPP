#include <iostream>
#include <vector>
#include <string>
using namespace std;
int main(void)
{
    vector<int> vec{1, 2, 3, 4, 5, 6};

    // iterator的调用形式, container::iterator iter = ...

    vector<int>::iterator iter_start = vec.begin();
    vector<int>::iterator iter_end = vec.end();

    while (iter_start != iter_end)
        cout << *iter_start++ << " ";
    cout << endl;


    vector<string> str = {"xiyou", "Linux"};
    vector<string>::iterator cs_iter_start = str.begin();
    vector<string>::iterator cs_iter_end = str.end();
    cout << *cs_iter_start << " "
         << *cs_iter_end << " "
         << endl;

    return 0;
}