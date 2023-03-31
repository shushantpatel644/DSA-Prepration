#include <iostream>
using namespace std;

class A
{
    int i;

public:
    void show()
    {
        for (int i = 0; i < 255; i++)
        {
            cout << " " << (char)i << i;
        }
    }
};
int main()
{
    A obj;
    obj.show();
}