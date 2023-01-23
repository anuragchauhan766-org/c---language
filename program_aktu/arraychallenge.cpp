#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string overlapping(int arr[])
{
    std::vector<int> range1;
    std::vector<int> range2;
    for (int i = arr[0]; i <= arr[1]; i++)
    {
        range1.push_back(i);
    }
    for (int j = arr[2]; j <= arr[3]; j++)
    {
        range2.push_back(j);
    }
    int count = 0;
    for (auto i : range1)
    {
        for (auto j : range2)
        {
            if (i == j)
            {
                count++;
            }
        }
    }
    if (count >= arr[4])
    {
        return "True";
    }
    else
    {
        return "false";
    }
}
int main()
{
    int arr[5];
    cout << " Enter the array of 5 elements: \n";
    for (int i = 0; i < 5; i++)
    {
        cin >> arr[i];
    }
    cout << overlapping(arr);
    return 0;
}