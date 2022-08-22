#include <iostream>
using namespace std;
class base
{
private:
    int d1;

public:
    int d2;
    base()
    {
        d1 = 10;
        d2 = 20;
    }
    int getd1()
    {
        return d1;
    }
};
class derived : private base
{
    int d3;

public:
    int d4;
    void show()
    {
        cout << getd1() << endl;
        cout << d2 << endl;
        cout << d3 << endl;
        cout << d4 << endl;
    }
    void calculate()
    {
        d3 = d2 * getd1();
        d4 = 1;
    }
};
int main()
{
    derived o1;
    o1.calculate();
    o1.show();

    return 0;
}