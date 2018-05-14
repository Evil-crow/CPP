#include <iostream>
#include <map>
#include <vector>
#include <string>
using namespace std;
int main(void)
{
    map<string, vector<string> >album;
    string first_name, name, search_name;

    // 这里还是不清楚,看来得找时间问问hepangda了
    cout << "Please input your serach name: ";
    cin >> search_name;

    while (cin >> first_name) {
        cin >> name;
        if (!album.count(first_name)) {                 // 用.count()方法来判断是否存在K, 当然.find()也可以
            vector<string> vec;
            vec.push_back(name);
            album.insert(make_pair(first_name, vec));   // 若不存在此K,则make_pair并且insert进map中
        } else {
            map<string, vector<string> >::iterator iter = album.find(first_name);
            iter->second.push_back(name);               // 查找到指定的iterator,之后进行push_back()操作
        }
    }

    
    map<string, vector<string> >::iterator fd = album.find(search_name);
    vector<string>::iterator vec_iter = fd->second.begin();    // 查找到指定的V, Value是Vector可以继续容器操作
    for (; vec_iter != fd->second.end(); ++vec_iter)
        cout << *vec_iter << " ";
    cout << endl;

    return 0;
}