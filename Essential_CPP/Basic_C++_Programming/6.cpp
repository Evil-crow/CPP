#include <iostream>
using namespace std;
int main(void)
{
    int array[5];
    double sum = 0.0;

    for (int i = 0; i < 5; ++i) {
        cin >> array[i];
        sum += array[i];
    }
    cout << sum/5 << endl;

    return 0;
}