#include <iostream>
using namespace std;
class complex
{
private:
    int a, b;

public:
    complex(void);
    void print(void)
    {
        cout << "complex no. is a + bi = " << a << "+" << b << "i";
    }
};

complex::complex(void) // default constructer
{
    a = 10;
    b = 20;
}

int main()
{
    complex o1;
    
    o1.print();
    return 0;
}