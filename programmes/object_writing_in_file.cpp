#include <iostream>
#include <string>
#include <fstream>
using namespace std;
class employe
{
public:
    string name;
    float salaray;
    void input()
    {
        ofstream file_obj;
        file_obj.open("employe_data.txt", ios::app);

        employe ob1;
        ob1.name = "anurag singh chauhan";
        ob1.salaray = 230000;

        file_obj.write((char *)&ob1, sizeof(ob1));
    }
    void show();
};
int main()
{
    employe obj;
    obj.input();
    return 0;
}