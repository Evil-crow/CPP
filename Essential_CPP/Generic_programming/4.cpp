// 整个代码的操作流程还是按照老规矩,就是文件操作的问题,但C++文件操作比C复杂,却又好玩的紧
#include <iostream>
#include <iterator>
#include <fstream>
#include <vector>
using namespace std;
int main(void)
{
    // 先创建两个ofstream对象
    ofstream odd_file("./odd_file", ios_base::app);
    ofstream even_file("./even_file", ios_base::app);

    // 两个文件流迭代器,一个是cin的迭代器,另一个是eof,文件尾
    istream_iterator<int> in_iter(cin);
    istream_iterator<int> eof;

    // 接下来是vector内部的操作
    vector<int> num_vec;
    copy(in_iter, eof, back_inserter(num_vec));

    vector<int> odd_vec, even_vec;
    vector<int>::iterator iter = num_vec.begin();
    for (; iter != num_vec.end(); ++iter)
        if (*iter % 2 != 0)
            odd_vec.push_back(*iter);
        else
            even_vec.push_back(*iter);
    
    // 根据已经构建的两个ostream对象,创建两个ostream的迭代器,用于输出文件流,注意其中的默认参数,用来控制空格/换行
    ostream_iterator<int> odd_iter(odd_file, " ");
    ostream_iterator<int> even_iter(even_file, "\n");

    // 调用泛型算法 copy(), 进行文件流的输出
    copy(odd_vec.begin(), odd_vec.end(), odd_iter);
    copy(even_vec.begin(), even_vec.end(), even_iter);

    return 0;
}