#include <iostream>
using namespace std;

class myBank
{
private:
    int atmPIN, Balance;

public:
    string bName, IFSC;
    int accNumber;

    void input()
    {
        atmPIN = 1619;
        Balance = 789132789;
        bName = "pnb";
        IFSC = "PNB123";
        accNumber = 32783932;
    }
    void output()
    {
        cout << atmPIN << endl;
        cout << Balance << endl;
        cout << bName << endl;
        cout << IFSC << endl;
        cout << accNumber << endl;
    }
};
int main()
{
    myBank obj;
    obj.input();
    obj.output();
    cout << endl;
    cout << "himanshu trying to access my account..." << endl;
    // cout << obj.atmPIN << endl;
    // cout << obj.Balance << endl;
    cout << obj.bName << endl;
    cout << obj.IFSC << endl;
    cout << obj.accNumber << endl;
    return 0;
}