#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    void setdata()
    {
        cout << "enter two number = ";
        cin >> a >> b;
    }
    void min_max()
    {
        if (a > b)
            cout << "maxiumum " << a;
        else if (a < b)
            cout << "minimum " << b;
        else
            cout << "A and b are Equal = ";
    }
};
int main()
{
    A obj;
    obj.setdata();
    obj.min_max();
    return 0;
}