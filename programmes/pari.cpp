#include <iostream>
#include <utility>
#include <string>
using namespace std;

int main()
{
    std::pair<string, int> p1("aello", 3);
    std::pair<string, int> p2("hnurag", 4);

    std::cout << p1.first << "  " << p1.second << endl;
    std::cout << p2.first << "  " << p2.second << endl;
    cout << (p1 == p2) << endl
         << (p1 != p2) << endl
         << (p1 > p2) << endl
         << (p1 < p2);
    return 0;
}