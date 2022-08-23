#include <iostream>
using namespace std;
class A
{
public:
    void show()
    {
        cout << "hello world from A";
    }
};
class B : public virtual A
{
};
class C : public virtual A
{
};
class D : public C, public B
{
};
int main()
{
    D a1;
    a1.show();
    return 0;
}