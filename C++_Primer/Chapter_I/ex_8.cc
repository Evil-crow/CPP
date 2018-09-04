/* 
 * Created By Crow
 * Date: Tue, 04/09/2018
 * Description: Chapter_I: 1.8
 *          1.8: 此题主要是关于错误使用注释的问题，错误使用注释会导致不容易理解的错误发生 
 *              不过主要是相对智能的IDE/Editor都会对注释有明显的提示
 */

#include <iostream>

int main(void)
{
    std::cout << "/*";
    std::cout << "*/";
    //std::cout << /* "*/" */;
    //             ^^^^^^  ^^  Error: 缺少字符串右引号,字符串不完整      
    std::cout << /* "*/" /* "/*" */;

    return 0;
}
