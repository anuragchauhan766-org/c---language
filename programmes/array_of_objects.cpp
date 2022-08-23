#include <iostream>
using namespace std;
class a
{
private:
    int A, B;

public:
    void setdata(int a, int b)
    {
        A = a;
        B = b;
    }
    void getdata()
    {
        cout << "the value of a is " << A << endl;
        cout << "the value of B is " << B << endl;
    }
};

int main()
{
    a *ptr = new a[3];
    ptr->setdata(3, 4);
    ptr->getdata();
    (ptr + 1)->setdata(3, 4);
    (ptr + 1)->getdata();
    (ptr + 2)->setdata(5, 6);
    (ptr + 2)->getdata();
    (ptr + 3)->setdata(1, 3);
    (ptr + 3)->getdata();
    return 0;
}