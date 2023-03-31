#include <iostream>
using namespace std;

class A
{
    int n, i, r;

public:
    void table()
    {
        cout << "Enter Any Number... ";
        cin >> n;
        for (int i = 1; i <= 10; i++)
        {
            r = n * i;
            cout << n << " * " << i << " = " << r << endl;
            ;
        }
    }
};
int main()
{
    A obj;
    obj.table();
    return 0;
}