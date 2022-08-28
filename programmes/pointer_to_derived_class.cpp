#include <iostream>
using namespace std;
class A
{
public:
    int base_varialbe;
    virtual void display()
    {
        cout << "base class function is called !!!\n";
    }
};
class B : public A
{
public:
    int derieved_class;
    void display()
    {
        cout << "derived class function is called !!\n";
    }
};
int main()
{
    A *base_pointer;

    B base_object;
    base_pointer = &base_object;
    base_pointer->display();
    B *derived_pointer;
    derived_pointer = &base_object;
    derived_pointer->display();

    return 0;
}