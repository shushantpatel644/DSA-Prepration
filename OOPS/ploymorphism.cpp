#include <iostream>
using namespace std;

class student
{
private:
public:
    void show(int x)
    {
        cout << "The value of x is :" << x << endl;
    }
    void show(double y)
    {
        cout << "The value of y is" << y << endl;
    }
    void show(int x, float y)
    {
        cout << "the value of a and y is" << x << y << endl;
    }
};
void main()
{
    student hero;
    hero.show(2);
    hero.show(4);
    hero.show(4, 5.34);
}