#include <iostream>
using namespace std;
// base class
class person
{
private:
    int net_worth;

public:
    int age;
    int height;
    int weight;
    person() {}
    person(int a, int h, int w)
    {
        age = a;
        height = h;
        weight = w;
    }
    void show()
    {
        cout << age << endl
             << height << endl
             << weight << endl;
    }
};

// derived class
class employe : public person
{
public:
    float salary;
    int id;

    employe(int id1, int a, int h, int w, int s = 1000) : person(a, h, w)
    {
        id = id1;
        salary = s;
    }
    void show_s()
    {
        show();
        cout << id << endl
             << salary << endl;
    }
};

int main()
{
    employe obj2(1, 23, 45, 42);

    // obj2.age = 1;
    // obj2.height = 265;
    // obj2.weight = 23;
    obj2.show_s();
    person a1(2, 3, 4);
    a1.show();

    return 0;
}