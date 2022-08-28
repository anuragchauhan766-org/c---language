#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    string s, s1;
    ofstream out("sample.txt");
    out << "hello world printing in file by c++ file handling!!!";
    out.close();
    ifstream in("sample.txt");
    // in >> s1;
    getline(in, s1);
    cout << s1;
    in.close();
    return 0;
}