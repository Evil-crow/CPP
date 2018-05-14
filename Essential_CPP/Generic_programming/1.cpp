#include <iostream>
#include <set>
#include <map>
#include <string>set 
using namespace std;
int main(void)
{
    string word;
    set<string> out_word = {"a", "an", "or", "and", "but"};
    map<string, int> words;

    while (cin >> word) {
        if (out_word.count(word))
            continue;
        
        /*
         * 借用迭代器实现
         * 若不存在该key,直接make_pair然后insert
         */
        map<string, int>::iterator iter = words.find(word);
        if (iter == words.end())
            words.insert(make_pair(word, 1));
        else
            iter->second++;

        /*
         * 借用查询的方式实现
         * 若不存在,map会自动添加K-V
         * 之后对其++即可
         * 
        if (words[word])
            words[word]++;
        else
            words[word]++;
        */
    }

    cout << "word list: " << endl;

    map<string, int>::iterator first = words.begin();
    for (; first != words.end(); ++first)
        cout << first->first 
            << " num: " 
            << first->second
            << endl;
    
    return 0;
}