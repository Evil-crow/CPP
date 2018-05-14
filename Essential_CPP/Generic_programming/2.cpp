#include <iostream>
#include <vector>
#include <string>
#include <functional>
#include <algorithm>
using namespace std;

// 此处核心是实现一个function object. 而且STL中都是模板实现,所以此处有下面的template版本
struct greater_string {
    bool operator() (string a, string b) {
        return a.size() > b.size() ? true : false;
    }
};

// 此为模板实现,但是还是有一定的问题, 比如说不能使用.size()方法的类型不能使用,目前仅支持STL容器
template <typename T>
struct greater_template {
    bool operator() (T a, T b) {
        return a.size() > b.size() ? true : false;
    }
};

int main(void)
{
    vector<string> article;
    string word;
    while (cin >> word)
        article.push_back(word);
    
    sort(article.begin(), article.end(), greater_template<string>());
    
    // 此处同样可以使用STL中支持的iterator实现
    /*
     * vector<string>::iterator first = article.begin();
     * vector<string>::iterator last = article.end();
     * for (; first != last; ++first)
        ......
     */
    for (int i = 0; i < article.size(); ++i)
        cout << article[i] << " ";
    cout << endl;

    return 0;
}