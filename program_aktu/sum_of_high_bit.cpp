#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int size;
    cout << "enter the size of array: \n";
    cin >> size;
    int arr[size];
    cout << "enter the array element: \n";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    int res = 0;
    for (auto i : arr)
    {
        res += trunc(log2(i));
    }
    cout << "output=>  \n\n"
         << res;
    return 0;
}