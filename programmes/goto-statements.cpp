#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    std::cout << "the value is a=" << a << std::endl;
label:

    std::cout << "hello2" << std::endl;
    if (a <= 20)
    {
        a = 30;
        std::cout << "hello" << std::endl;
        goto label;
    }

    return 0;
}