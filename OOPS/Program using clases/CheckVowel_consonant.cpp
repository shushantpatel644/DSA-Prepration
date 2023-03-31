#include <iostream>
using namespace std;

class A
{
    char ch;

public:
    void input()
    {
        cout << "Enter any character ";
        cin >> ch;
    }
    void show()
    {
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
            cout << "Vowel";
        else
            cout << "Consonant";
    }
};
int main()
{
    A Obj;
    Obj.input();
    Obj.show();
    return 0;
}