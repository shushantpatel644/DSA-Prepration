#include <iostream>
using namespace std;
class add
{
    int a, b, c;

public:
    void input()
    {
        cout << "enter the number";
        cin >> a >> b;
    }
    void sum()
    {
        c = a + b;
    }
    void show()
    {
        cout << c;
    }
};

int main()
{
    add obj;
    obj.input();
    obj.sum();
    obj.show();
    return 0;
}