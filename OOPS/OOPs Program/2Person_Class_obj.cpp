#include <iostream>
using namespace std;

class Person
{
private:
    int run;
    string msg;

public:
    void play()
    {
        run = 51;
        cout << "Today i scored " << run << "runs" << endl;
    }
    void walk()
    {
        msg = "Today i walked 3 killometers";
        cout << msg << endl;
    }
};
int main()
{
    Person obj;
    obj.play();
    obj.walk();
    return 0;
}