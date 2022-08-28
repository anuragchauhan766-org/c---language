#include <iostream>
using namespace std;
template <class T>
T add(T &a, T &b)
{
    T result = a + b;
    return result;
}
int main()
{
    float i = 3.5, j = 4;
    cout << add(i, j);

    return 0;
}