#include <iostream>
using namespace std;

int main()
{
    int a = 2;
    int &b = a;
    std::cout << "a=" << b << std::endl;
    return 0;
}