#include <iostream>
using namespace std;
class y;
class x
{
private:
    int a;
    friend void exchange(x &, y &);

public:
    void getdata(int a1)
    {
        a = a1;
    }
    void display(void)
    {
        cout << a << endl;
    }
};
class y
{
private:
    int b;
    friend void exchange(x &, y &);

public:
    void getdata(int b1)
    {
        b = b1;
    }
    void display(void)
    {
        cout << b << endl;
    }
};
void exchange(x &o1, y &o2)
{
    int temp = o1.a;
    o1.a = o2.b;
    o2.b = temp;
}

int main()
{
    x o1;
    y o2;
    o1.getdata(32);
    o2.getdata(53);
    exchange(o1, o2);
    cout << "value after exchange is a = ";
    o1.display();
    cout << "value after exchange is b = ";
    o2.display();

    return 0;
}