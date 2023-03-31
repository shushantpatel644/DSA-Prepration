#include <iostream>
using namespace std;

class A
{
    char ch;
    int n;

public:
    void input()
    {
        cout << "Enter Any character.. ";
        cin >> ch;
    }
    void output()
    {
        n = ch;
        cout << "ASCII value of " << ch << " is " << n;
    }
};
int main()
{
    A obj;
    obj.input();
    obj.output();
    return 0;
}