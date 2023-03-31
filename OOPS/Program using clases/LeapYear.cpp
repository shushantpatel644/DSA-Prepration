#include <iostream>
using namespace std;

class A
{
    int year;

public:
    void leapYear()
    {
        cout << "Enter year... ";
        cin >> year;
        if (year % 400 == 0 && year % 100 == 0 || year % 4 == 0 && year % 100 != 0)
            cout << "LeapYear";
        else
            cout << "Not leapyear";
    }
};
int main()
{
    A Obj;
    Obj.leapYear();
    return 0;
}