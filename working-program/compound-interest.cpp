#include <iostream>
using namespace std;
class compound
{
private:
    int principle;
    float interestrate;
    int timeperiod;
    float totalreturn;

public:
    compound() {}
    compound(int p, int t, int r);
    compound(int p, int t, float r);
    void show()
    {
        cout << "the principle amount is " << principle << " after " << timeperiod << " year return is " << totalreturn << endl;
    }
};

compound::compound(int p, int t, int r)
{
    principle = p;
    interestrate = float(r) / 100;
    timeperiod = t;
    totalreturn = principle;
    for (int i = 0; i < timeperiod; i++)
    {
        totalreturn *= (1 + interestrate);
    }
}
compound::compound(int p, int t, float r)
{
    principle = p;
    interestrate = r;
    timeperiod = t;
    totalreturn = principle;
    for (int i = 0; i < t; i++)
    {
        totalreturn *= (1 + interestrate);
    }
}

int main()
{
    compound ld1, ld2, ld3;
    int p, t, R;
    float r;
    cout << "Enter the value of p,t,r " << endl;
    cin >> p >> t >> r;
    ld1 = compound(p, t, r);
    ld1.show();

    return 0;
}