#include <iostream>
using namespace std;
class addition
{
private:
    int a, b;

public:
    void add(addition c1, addition c2);
    void set();
    void display();
};
void addition::display()
{
    cout << "a = " << a << endl
         << "b= " << b << endl;
}
void addition::add(addition c1, addition c2)
{
    a = c1.a + c2.a;
    b = c1.b + c2.b;
}

void addition::set()
{
    cout << "enter the value of a and b" << endl;
    cin >> a >> b;
}
int main()
{
    addition a1, a2, a3;
    a1.set();
    a1.display();
    a2.set();
    a2.display();
    a3.add(a1,a2);
    a3.display();
    return 0;
}