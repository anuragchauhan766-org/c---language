#include <bits/stdc++.h>
#include <sstream>
using namespace std;

int main()
{
    std::string line = ("hello\\ lol&i\\am\\anuraG\\nice\\to\\meet\\u!");
    // std::vector<std::string> temp;
    // std::string word;
    // std::stringstream a1(line);
    // while (getline(a1, word, '\\'))
    // {
    //     temp.push_back(word);
    // }
    // for (int i = 0; i < temp.size(); i++)
    // {
    //     cout << temp[i] << "\n";
    // }
    line.erase(remove(line.begin(), line.end(), '\\'), line.end());
    cout << line;

    return 0;
}