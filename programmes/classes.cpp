#include <iostream>
using namespace std;
class animal
{
private:
    int a, b, c;

public:
    int d, e;
    void setdata(int a1, int b1, int c1);
    void print()
    {
        std::cout << "a= " << a << std::endl;
        std::cout << "b= " << b << std::endl;
        std::cout << "c= " << c << std::endl;
        std::cout << "d= " << d << std::endl;
        std::cout << "e= " << e << std::endl;
    }
};

void animal::setdata(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    animal dog;
    dog.d = 1;
    dog.e = 12;
    dog.setdata(134, 4, 3);

    dog.print();
    return 0;
}