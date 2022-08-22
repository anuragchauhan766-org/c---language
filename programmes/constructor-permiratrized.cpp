#include <iostream>
using namespace std;
class point
{
private:
    int x, y;

public:
    point(int a, int b);
    void display(void)
    {
        cout << "point is " << x << "," << y;
    }
};

point::point(int a, int b)
{
    x = a;
    y = b;
}

int main()
{
    point o1(2, 3);
    o1.display();
    return 0;
}