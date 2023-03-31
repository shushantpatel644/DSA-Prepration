#include <iostream>
using namespace std;

class Print
{
public:
    void show()
    {
        cout << "hello sir" << endl;
    }
};
int main()
{
    Print obj;
    obj.show();
    return 0;
}