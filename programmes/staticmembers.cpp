#include <iostream>
using namespace std;
class name
{
    int id;
    int static count;

public:
    void setdata();
    void getdata();
};
void name::getdata()
{
    cout << "the employ id is " << id << " and its no. is " << count << endl;
}
void name::setdata()
{
    cout << "enter employ id" << endl;
    cin >> id;
    count++;
}
int name::count;
int main()
{
    name rohan, sohan, ram;
    rohan.setdata();
    rohan.getdata();

    sohan.setdata();
    sohan.getdata();

    ram.setdata();
    ram.getdata();
    return 0;
}