#include <iostream>
using namespace std;

class A
{
    int a, b, c;

public:
    void input()
    {
        cout << "enter two no";
        cin >> a >> b;
    }
    void mult()
    {
        c = a * b;
    }
    void output()
    {
        cout << "multiplication" << c;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.mult();
    obj.output();
}