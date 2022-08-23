#include <iostream>
#include <math.h>
using namespace std;
class simplecalculator
{

public:
    float a = 0, b = 0;
    char op;
    void setdata_simple()
    {
        cout << "enter two value to perform calculations " << endl;
        cin >> a >> b;
        cout << "enter operation you want to perform " << endl;
        cin >> op;
        display();
    }
    float calculation()
    {
        switch (op)
        {
        case '+':
            return a + b;
            break;
        case '-':
            return a - b;
            break;
        case '*':
            return a * b;
            break;
        case '/':
            return a / b;
            break;

        default:
            cout << "wrong operator!!!!!" << endl;
            return 0;
            break;
        }
    }
    void display()
    {

        cout << "answer of calulation is \n " << a << op << b << " = " << calculation() << endl;
    }
};

class sciencetific_calculator
{

public:
    float a1 = 0, b1 = 0;
    char op1;
    void setdata_scienctific()
    {
        cout << "enter the variable to perform scientific caculation\n";
        cin >> a1 >> b1;
        cout << "enter operation \n for power of x^y == press ^ \n for square root == press r \n";
        cin >> op1;
        display1();
    }
    float calculation1()
    {
        switch (op1)
        {
        case '^':
            return pow(a1, b1);
            break;
        case 'r':
            return sqrt(a1);
            break;

        default:
            cout << "wrong operator!!!";
            return 0;
            break;
        }
    }
    void display1()
    {

        cout << "answer of calulation is \n " << calculation1() << endl;
    }
};
class hybride_calculator : public simplecalculator, public sciencetific_calculator
{
public:
    int d;
    void decide()
    {
        cout << "enter which calculation you want to perform\n";
        cout << " 1. simple \n 2. sciencetific" << endl;
        cin >> d;
        if (d == 1)
        {
            setdata_simple();
        }
        else if (d == 2)
        {
            setdata_scienctific();
        }
        else
        {
            cout << "wrong choice!!!!\n";
        }
    }
};

int main()
{
    hybride_calculator a1;
    a1.decide();

    return 0;
}