#include <iostream>
#include <vector>
using namespace std;

void func_fibo(int, vector<int> &);

void func_pell(int, vector<int> &);

void func_ans(int, vector<int> &);

int main(void)
{
    // 使用函数指针可以带来弹性,更方便的操作,减轻冗余操作
    // 使用重载,模板,函数指针可以减轻很多问题

    void (*func_arr[3])(int, vector<int> &) = {
        func_fibo,
        func_ans,
        func_pell
    };

    enum func_type {
        fibo,
        ans,
        pell,
    };

    void (*ptr)(int, vector<int> &);
    ptr = func_arr[pell];
    void (&ptr)(int, vector<int> &) = func_ans;

    return 0;
}