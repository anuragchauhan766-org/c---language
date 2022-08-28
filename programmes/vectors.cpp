#include <iostream>
#include <vector>
using namespace std;

void setdata(vector<int> &v)
{
    int element, size;
    ;
    cout << "Enter the size of vector:  \n";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter element :   ";
        cin >> element;
        v.push_back(element);
    }
    // v.pop_back();
}
void display(vector<int> &v)
{
    for (int i = 0; i < (int)v.size(); i++)
    {
        cout << v[i] << endl;
    }
}

int main()
{
    vector<int> v1;
    setdata(v1);
    display(v1);
    cout << endl;

    v1.insert(v1.end() - 1, 2, 10);
    display(v1);
    return 0;
}