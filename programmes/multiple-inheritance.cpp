#include <iostream>
using namespace std;
class base1
{
private:
    int a;

protected:
    int b;

public:
    int c;
};

class base2
{
private:
    int a1;

protected:
    int b1;

public:
    int c1;
};

class derived:public base2,public base1{
    public:
        int data1;
        void setdata(){
            b = 1;
            b1 = 2;
            c = 3;
            c1 = 3;
        }
        void display(){
            cout << b << endl
                 << b1 << endl
                 << c << endl
                 << c1 << endl;
        }
};
int main()
{
    derived o1;
    o1.setdata();
    o1.display();
    return 0;
}