#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    A()
    { // default const
        a = 20;
        b = 30;
        cout << a << endl
             << b;
    }
};

int main()
{
    A obj;
    return 0;
}