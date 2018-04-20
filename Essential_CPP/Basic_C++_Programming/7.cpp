#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
using namespace std;
int main(void)
{
    ifstream infile("./text.txt");

    if (!infile)
        cerr << "Open the file error!" << endl;
    
    cout << "Open the file success!" << endl;
    
    vector<string> string_vector;
    string temp;
    
    while (infile >> temp)
        string_vector.push_back(temp);
    
    cout << endl;
    for (int i = 0; i < string_vector.size( ); ++i)
        cout << string_vector[i] << " ";
    cout << endl;
    
    sort(string_vector.begin( ), string_vector.end( ));
    
    ofstream outfile("./sort_file", ios_base::app);
    
    if (!outfile)
        cerr << "Open the file Error!" << endl;

    for (int i = 0; i < string_vector.size( ); ++i)
        outfile << string_vector[i] << " ";
    outfile << endl;

    cout << "Sort and output to file OK!" << endl;

    return 0;
}