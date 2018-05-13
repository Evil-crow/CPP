#include <iostream>
#include <algorithm>
#include <iterator>
#include <vector>
#include <fstream>
using namespace std;

void normal_method(void)
{
    ofstream out_stream("./sort.txt", ios_base::app);
    vector<string> words;
    string word;

    while (cin >> word)
        words.push_back(word);
    sort(words.begin(), words.end());
    for (int i = 0; i < words.size(); ++i)
        out_stream << words[i] << endl;
}

void iostream_iterator(void)
{
    ofstream out_file("./sort.txt", ios_base::app);    // 创建输出文件流对象

    istream_iterator<string> is_iter(cin);       // 文件输入流迭代器, 对象是cin
    istream_iterator<string> eof;
    
    vector<string> vec;
    copy(is_iter, eof, back_inserter(vec));
    
    sort(vec.begin(), vec.end());

    ostream_iterator<string> os_iter(out_file, "\n");       // 文件输出流迭代器, 输出中间是"\n"划分, 本身是连续的
    copy(vec.begin(), vec.end(), os_iter);

}

int main(void)
{
   // normal_method();
    iostream_iterator();

    return 0;
}