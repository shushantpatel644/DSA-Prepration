#include <iostream>
using namespace std;

struct student
{
    int roll;
    string name;
    int age;
    void personaldetails()
    {
        cout << "name is :" << name << endl;
        cout << "age is :" << age << endl;
        cout << "roll no is :" << roll << endl;
    }
};
int main()
{
    student Shushant;
    student rahul;
    Shushant.age = 21;
    Shushant.name = "Shushant Patel";
    Shushant.roll = 47;

    struct student mohit = {21, "sneha", 21};
    Shushant.personaldetails();
    cout << endl;
    mohit.personaldetails();
    cout << endl;
}