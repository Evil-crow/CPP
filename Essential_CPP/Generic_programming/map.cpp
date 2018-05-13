#include <iostream>
#include <map>
#include <string>
using namespace std;
int main(void)
{
    map<string, int> words;                     // map中的所有成员都是一对对的pair key-value
    string word, search;

    cout << "Input the word you want to find: ";
    cin >> search;
    while (cin >> word)                         // Ctrl-D来进行终止输入
        words[word]++;
    
    
    // 以下为map中常用的三种查询方式
    if (words[search])                         // 直接查询方便, 但是map中没有的pair会加入, value=0            
        cout << search 
            << "'s num is: " 
            << words[search] 
            << endl;
    
    // 第二种方法是使用map.find(), 与泛型算法区分, map.find()会找到复合要求的iterator(迭代器)
    map<string, int>::iterator iter = words.find(search);
    if (iter != words.end())
        cout << endl << iter->first << " now is: " << iter->second << endl;
    
    // map.count() 会找出指定项在map中出现的次数, map中同样地key只能出现1次, multimap可以出现多次,此处不讨论.
    cout << search << " use map.count() get the num is: " << words.count(search) << endl;

    return 0;
}