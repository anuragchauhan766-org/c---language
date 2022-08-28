#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

int main()
{
    vector<vector<int>> v1(3);
    v1[1].push_back(1);
    cout << v1[1].size();
    for (unsigned int i = 0; i < v1.size(); i++)
    {
        for (unsigned int j = 0; j < v1[i].size(); j++)
        {
            cin >> v1[i][j];
        }
    }
    for (unsigned int i = 0; i < v1.size(); i++)
    {
        for (unsigned int j = 0; j < v1[i].size(); j++)
        {
            cout << v1[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}