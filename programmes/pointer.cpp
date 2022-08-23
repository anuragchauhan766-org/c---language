#include <iostream>
using namespace std;

int main()
{

    int *a = new int[4];
    a[0] = 1;
    *(a+1) = 1;
    a[2] = 2;
    a[3] = 3;
    for (int i = 0; i < 4; i++)
    {
        cout << a[i] << endl;
    }
    delete a;


    return 0;
}