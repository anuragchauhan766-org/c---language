#include <iostream>
#include <map>
using namespace std;

int main()
{
    std::map<string, int> mymap;
    mymap["subham"] = 100;
    mymap["anurag"] = 400;
    mymap["deepak"] = 1400;
    mymap["rahul"] = 4100;

    for (std::map<string, int>::iterator it = mymap.begin(); it != mymap.end(); it++)
    {
        cout << it->first << "=>" << it->first << endl;
    }
    cout << mymap.size();
    return 0;
}