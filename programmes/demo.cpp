#include <iostream>
using namespace std;

int main()
{
    void *ptr;
    float g = 10;
    ptr = &g;
    float f = *(float *)ptr;
    return 0;
}