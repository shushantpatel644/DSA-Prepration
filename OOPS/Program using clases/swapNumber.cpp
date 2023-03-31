#include <iostream>
using namespace std;

class A
{
    int a, b;

public:
    void input()
    {
        cout << "enter the number.. ";
        cin >> a >> b;
    }
    void swap()
    {
        cout << "Before swapping ";
        cout << "a = " << a << ends << "b = " << b << endl;
        int temp = a;
        a = b;
        b = temp;
        cout << "after Swapping ";
        cout << " a = " << a << " b = "
             << " " << b;
    }
};
int main()
{
    A Obj;
    Obj.input();
    Obj.swap();
    return 0;
}