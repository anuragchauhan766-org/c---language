#include <iostream>
using namespace std;
int factorail(int n)
{
    if (n == 1 || n == 0)
    {
        return 1;
    }
    return (n * factorail(n - 1));
}
int main()
{
    int n;
    std::cout << "Enter a no. to find its factorial:" << std::endl;
    cin >> n;
    cout << "the factorial of " << n << " is " << factorail(n) << endl;

    return 0;
}