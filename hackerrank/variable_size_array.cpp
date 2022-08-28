#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n, q, k, i1, j1;
    cout << "enter value of n and q" << endl;
    ;
    cin >> n >> q;
    vector<vector<int>> a(n);
    for (int i = 0; i < n; i++)
    {
        cout << "enter k" << endl;
        ;
        cin >> k;
        for (int j = 0; j < k; j++)
        {
            int val;
            cout << "enter element in k" << endl;
            cin >> val;
            a[i].push_back(val);
        }
    }
    for (int i = 1; i <= q; i++)
    {
        cout << "enter i and j" << endl;
        ;
        cin >> i1 >> j1;
        cout << a[i1][j1];
    }
    return 0;
}