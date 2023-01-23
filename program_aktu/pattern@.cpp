#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: \n";
    cin >> n;
    int space = n / 2;
    int col = 1;
    for (int i = 1; i <= n / 2 + 2; i++)
    {
        for (int space = 1; space <= n + 1 - i; space++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2 * i - 1; j++)
        {
            cout << "@";
        }
        cout << "\n";
    }
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= space; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= col; k++)
        {
            cout << "*";
        }
        for (int j = 1; j <= n; j++)
        {
            if (i == n / 2 + 1)
            {
                cout << "@";
            }
            else
            {
                cout << " ";
            }
        }
        for (int k = 1; k <= col; k++)
        {
            cout << "*";
        }
        if (i <= n / 2)
        {
            space--;
            col++;
        }
        else
        {
            space++;
            col--;
        }

        cout << "\n";
    }

    return 0;
}