#include <bits/stdc++.h>
#include <iostream>
using namespace std;
string stringchallenge(string str)
{
    string challengetoken = "vd01qaskc5e";
    bool start = true;
    string res = "";
    for (int i = 0; i < (int)str.length(); i++)
    {
        if (isalpha(str[i]))
        {
            if (start)
            {
                res += toupper(str[i]);
                start = false;
            }
            else
            {
                res += tolower(str[i]);
            }
        }
        else
        {
            start = true;
        }
    }
    res += challengetoken;
    for (int i = 2; i < (int)res.length(); i += 3)
    {
        res[i] = 'X';
    }

    return res;
}
int main()
{
    string str;
    cout << "enter the string: \n";
    getline(cin, str);
    cout << stringchallenge(str);
    return 0;
}