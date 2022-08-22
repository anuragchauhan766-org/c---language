#include <iostream>
using namespace std;
class number
{
private:
    int a;

public:
    number()
    {
        a = 0;
    }
    number(int x)
    {
        a = x;
    }
    number(number &obj)
    {
        cout << "copy contsructer invoked!!!!!!!" << endl;
        a = obj.a;
    }
    void show()
    {
        cout << a << endl;
    }
};

int main()
{
    number x(3), y, z(34), z2;

    x.show();
    y.show();
    z.show();
    number z1(z);
    z1.show();
    z2 = x;
    z2.show();
    return 0;
}