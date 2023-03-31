#include <iostream>
using namespace std;

class A
{
private:
    int a;

protected:
    int b;

public:
    int c;
};

int main()
{
    A obj;
    // obj.a = 10; // not allowed
    // obj.b = 23; // not allowed
    // obj.c = 30; // allowed
    // cout << obj.a << endl;
    // cout << obj.b << endl;
    cout << obj.c << endl;

    return 0;
}