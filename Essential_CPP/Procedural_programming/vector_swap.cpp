#include <iostream>
#include <vector>
using namespace std;

/* 
 * display( ): 打印函数
 * 此处reference 用来指向vec,主要用来省去多余的拷贝,提高效率
 * 同时,此处的const表明,并非是为了进行值得改变进行引用传递,而是为了提高效率而使用的
 */

void display(const vector<int> &vec)   // 涉及到默认值的问题,见default_paramenter_value.cpp
{
    for (int i = 0; i < vec.size( ); ++i)
        cout << vec[i] << " ";
    cout << endl;
}

void swap(int &val_1, int &val_2)
{
    int temp = val_1;
    val_1 = val_2;
    val_2 = temp;
}

void bubble_sort(vector<int> &vec)
{
    for (int i = 0; i < vec.size( ); ++i)
        for (int j = i + 1; j < vec.size( ); ++j)
            if (vec[i] > vec[j])
                swap(vec[i], vec[j]);
}

int main(void)
{
    vector<int> vec;
    int size, temp;

    cout << "Please input the vector size: ";
    cin >> size;
    while (size--) {
        cin >> temp;
        vec.push_back(temp);
    }

    display(vec);
    bubble_sort(vec);
    display(vec);
    
    return 0;
}

// 总结: value/reference,根据需求,C++中,reference比pointer的应用场景更多