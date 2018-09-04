/*
 * @filename:    ex_12_14_15.cc
 * @author:      Crow
 * @date:        09/04/2018 18:30:24
 * @description: Chapter_I: 1.12, 1.14, 1.15
 *          1.12: 完成-100~100的加法任务
 *          1.13: 略
 *          1.14: 明确循环次数时,使用for, 
 *                while,更适合通用的情况
 *                do~while, 则适合仅执行一次的情况
 *          1.15: 常见的g++/clang错误
 */

// 1.12 的其他实现方式, 事件复杂度为O(1)

#include <iostream>

using std::cout;

template <int N>
struct Add {
    constexpr static int value = N + Add<N - 1>::value;
};

template <>
struct Add<-100> {
    constexpr static int value = -100;
};

int main(void)
{
    std::cout << Add<100>::value << std::endl;
}


// 1.15 g++ error

// declaration error
// 1.cc:10:10: error: ‘cout’ is not a member of ‘std’
//     std::cout << "Hello" << std::endl;
//          ^~~~
// 1.cc:10:34: error: ‘endl’ is not a member of ‘std’
//     std::cout << "Hello" << std::endl;
//                                  ^~~~

// type error
// 1.cc: In function ‘int main()’:
// 1.cc:10:13: error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]
//     int a = "hello";
//             ^~~~~~~

// syntax error
// 1.cc: In function ‘int main()’:
// 1.cc:11:20: error: expected ‘;’ before ‘:’ token
//     cout << "hello":
//                    ^


// 1.15 clang++ error

// declaration error
// 1.cc:10:5: error: use of undeclared identifier 'std'
//    std::cout << "Hello" << std::endl;
//    ^
// 1.cc:10:29: error: use of undeclared identifier 'std'
//    std::cout << "Hello" << std::endl;
//                            ^
// 2 errors generated.

// type error
// 1.cc:10:9: error: cannot initialize a variable of type 'int' with an lvalue of type
//      'const char [6]'
//    int a = "hello";
//        ^   ~~~~~~~
// 1 error generated.

// syntax error
// 1.cc:11:20: error: expected ';' after expression
//    cout << "hello":
//                   ^
//                   ;
//1 error generated.
