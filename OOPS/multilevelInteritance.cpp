#include <iostream>
using namespace std;

class student
{
private:
    int a, b, c;

public:
    void base()
    {
        cout << "Enter the value" << endl;
        cin >> a >> b;
    }
    void input()
    {
        c = a + b;
        cout << "the value is " << c << endl;
    }
};

class student1
{
private:
    int a, b, c;

public:
    void base1()
    {
        cout << "Enter the value" << endl;
        cin >> a >> b;
    }
    void input1()
    {
        c = a - b;
        cout << "the value is " << c << endl;
    }
};
class drive : public student, public student1
{
private:
    int a, b, c;

public:
    void base2()
    {
        cout << "Enter the value" << endl;
        cin >> a >> b;
    }
    void input2()
    {
        c = a * b;
        cout << "the value is " << c << endl;
    }
};

void main()
{
    student hero;
    hero.base();
    hero.input();
}