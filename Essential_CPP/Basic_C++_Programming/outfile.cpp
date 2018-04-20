#include <iostream>
#include <algorithm>
#include <fstream>
using namespace std;
int main(void)
{
    ofstream outsream("./file_test", ios_base::app);

    if (!outsream)
        cerr << "Open the file error!";
    outsream << __DATE__
             << __LINE__
             << endl;
    
    return 0;
}