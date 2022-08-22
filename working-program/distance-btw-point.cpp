#include <iostream>
#include <cmath>
using namespace std;
class point
{
private:
    int x, y;
    friend int distance(point, point);

public:
    point();
    void display(void)
    {
        cout << "(" << x << "," << y << ")";
    }
};

point::point()
{
    cout << "enter points" << endl;
    cin >> x >> y;
}
int distance(point o1, point o2)
{
    return sqrt(pow(o2.x - o1.x, 2) + pow(o2.y - o1.y, 2));
}
int main()
{
    point a1, a2;
    cout << "the distance btw the points ";
    a1.display();

    cout << "and";
    a2.display();
    cout << " is " << distance(a1, a2);
    

    return 0;
}