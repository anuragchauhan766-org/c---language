#include <iostream>
using namespace std;
class object
{
private:
    int a;

    friend void display(object c1);

public:
    void set();
};
void display(object c1)
{
    c1.a = 12;
    cout << c1.a << endl;
};
void object::set()
{
    a = 10;
}

int main()
{
    object a1;
    display(a1);
    return 0;
}