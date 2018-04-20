#include <iostream>
#include <vector>
using namespace std;
int main(void)
{
    int vector_len, temp;
    double sum = 0.0;

    cout << "please input the length and number: " << endl;
    cin >> vector_len;
    vector<int> arr;
    while (arr.size( ) < vector_len) {
        cin >> temp;
        arr.push_back(temp);
    }

    temp = 0;
    while (temp < vector_len) {
        sum += arr[temp++];
    }

    cout << '\n' << sum/vector_len << endl;
    return 0;
}