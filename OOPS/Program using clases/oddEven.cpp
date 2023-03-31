#include <iostream>
using namespace std;

class A
{
    int n;

public:
    void inpput()
    {
        cout << "Enter any numbers.. ";
        cin >> n;
    }
    void addEven()
    {
        if (n % 2 == 0)
            cout << "number is Even ";
        else
            cout << "Number is odd";
    }
};
int main()
{
    A Obj;
    Obj.inpput();
    Obj.addEven();
    return 0;
}