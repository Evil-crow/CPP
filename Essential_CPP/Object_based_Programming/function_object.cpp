#include <iostream>
#include <vector>
using namespace std;
class less_than {
public:
    less_than(int _data) : lt_data(_data) {
        ;
    }
    int get_data(void) {
        return lt_data;
    }
    int set_data(int data) {
        lt_data = data;
    }
    bool operator()(int value) const; 
private:
    int lt_data;
};

bool less_than::operator()(int value) const
{
    return value < lt_data;
}

int count_less_than(const vector<int> &vec, int comp_value)
{
    int count = 0;
    less_than lt(comp_value);

    for (vector<int>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter)
        if (lt(*iter))
            count++;
    
    return count;
}

void print_less_than(const vector<int> &vec, int comp_value)
{
    less_than lt(comp_value);

    cout << "In this vector"
        << " < " << comp_value << ":"
        << endl;
    for (vector<int>::const_iterator iter = vec.begin(); iter != vec.end(); ++iter)
        if (lt(*iter))
            cout << *iter << " " ;
    
    cout << endl;
}

int main(void)
{
    int array[] = {
        1, 2, 5, 6, 7, 8, 89, 45, 67, 45, 34, 23,
    };

    vector<int> vec = {array, array+12};
    cout << count_less_than(vec, 45) << endl;
    print_less_than(vec, 45);

    return 0;
}