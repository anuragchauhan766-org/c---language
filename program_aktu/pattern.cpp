#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the value of n: \n";
    cin >> n;
    if (n % 2 == 0 || n < 5)
    {
        cout << "enter a odd value and greater then or equal to  5 !!\n";
        exit(0);
    }

    for (int i = 0; i < n / 2 + 1; i++)
    {
        for (int space = 1; space <= n / 2 - i; space++)
        {
            cout << " ";
        }

        for (int j = 1; j <= 2 * i + 1; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
    for (int i = 0; i < n / 2 + 1; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j == 0 || j == n - 1)
            {
                cout << "@";
            }

            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
    for (int i = 0; i <= n / 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if ((j == 0 || j == n - 1) && i != n / 2)
            {
                cout << "@";
            }
            else if (j >= n / 2 - i && j <= n / 2 + i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}