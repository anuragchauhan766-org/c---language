#include <iostream>
using namespace std;
class shop
{
private:
    int item[100];
    int price[100];
    int counter;

public:
    void display();

    void setprice();
    void setcounter()
    {
        counter = 0;
    }
};

void shop::display()

{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item no." << i + 1 << " is " << price[i] << endl;
    }
}

void shop::setprice()
{
    cout << "enter the item no " << counter + 1 << endl;
    cin >> item[counter];
    cout << "enter the price for item no." << counter + 1 << endl;
    cin >> price[counter];
    counter++;
}

int main()
{
    shop mystyle;
    mystyle.setcounter();
    mystyle.setprice();
    mystyle.setprice();
    mystyle.setprice();
    mystyle.display();

    return 0;
}