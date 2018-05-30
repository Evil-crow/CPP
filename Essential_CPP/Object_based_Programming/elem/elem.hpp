#ifndef _ELEM_H
#define _ELEM_H
#include <iostream>
#include <vector>
#include <algorithm>
#include <assert.h>
class elem {
public:
    static bool is_elem(int data);
private:
    static const int elem_max = 100;
    static std::vector<int> _elem;
};

std::vector<int> elem::_elem = {1, 2, 5, 7, 9, 79, 18};

bool elem::is_elem(int data)
{
    assert(_elem.size());
    assert(data < elem::elem_max);

    std::vector<int>::iterator start_pos = _elem.begin();
    std::vector<int>::iterator end_pos = _elem.end();

    return (std::find(start_pos, end_pos, data) == end_pos) ? false : true;
}

#endif