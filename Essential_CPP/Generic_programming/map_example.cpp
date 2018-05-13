#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(void)
{
    map<string, double> score;
    string name;
    double grade;

    cin >> name;
    while (name != "noname") {
        cin >> grade;
        score.insert(make_pair(name, grade));
        cin >> name;
    }

    cin >> name;
    map<string, double>::iterator iter = score.find(name);
    if (iter == score.end())
        cout << "Not found." << endl;
    else
        cout << iter->second * 0.21 << endl;
    
    return 0 
}
