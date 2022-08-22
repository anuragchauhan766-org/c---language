#include <iostream>
#include <string>
using namespace std;
class name
{
    string s;

public:
    void read();
    void print();
    void check();
};
void name::read()
{
    cout << "enter a binary no." << endl;
    cin >> s;
    print();
}
void name::print()
{
    cout << s;
    // for (unsigned int i = 0; i < s.length(); i++)
    // {
    //     cout << s.at(i);
    // }
}
int main()
{
    name anurag;
    anurag.read();
    return 0;
}