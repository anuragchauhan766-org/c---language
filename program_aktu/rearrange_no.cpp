#include <bits/stdc++.h>
#include <iostream>
using namespace std;
int largediff(int n)
{
    string s = to_string(n);
    sort(s.begin(), s.end());
    int min = stoi(s);
    reverse(s.begin(), s.end());
    int max = stoi(s);
    return max - min;
}
int main()
{
    int n;
    cout << "Enter a no: \n";
    cin >> n;
    cout << largediff(n);
    return 0;
}