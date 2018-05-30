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