#include <iostream>
using namespace std;
class thief
{
private:
    string name, address;
    int mob;

public:
    void input()
    {
        name = "Raj";
        address = "Dehradoon";
        mob = 9679789;
    }
    void output()
    {
        cout << name << endl;
        cout << address << endl;
        cout << mob << endl;
    }
};
class police : public thief
{
};
int main()
{
    police p;
    p.input();
    p.output();
    // thief obj;
    // obj.input();
    // obj.output();
    return 0;
}