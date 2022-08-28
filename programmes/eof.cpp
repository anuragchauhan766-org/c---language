#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    // write
    int age;

    ofstream write;
    write.open("sample.txt");
    string s;
    char e = 'y';
    cout << "\t\t\t\t\tEnter the data!!!!!!!!!!!!\n\n\n";
    while (e == 'y')
    {

        cout << "enter your name: " << endl;
        getline(cin, s);
        cout << "enter your age : \n";
        cin >> age;
        write << s << "\t\t\t\t"
              << age << endl;
        cout << "\n\npress 'y' to continue or 'q' to exit\n\n";
        cin >> e;
        cin.ignore();
    }

    write.close();

    // reading file

    ifstream in;
    in.open("sample.txt");
    string s1;
    while (in.eof() == 0)
    {

        getline(in, s1);
        cout << endl
             << endl
             << s1 << endl;
    }
    in.close();
    return 0;
}