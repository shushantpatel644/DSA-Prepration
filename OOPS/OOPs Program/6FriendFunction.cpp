#include <iostream>
using namespace std;

class ankit
{
private:
    string tv;

public:
    void show()
    {
        tv = "IPL final 2022";
    }
    friend void ankush(ankit r);
};

void ankush(ankit r)
{ 
    cout << "I am ankush i am watching " << r.tv;
}
int main()
{
    ankit a;
    a.show();
    ankush(a);
    return 0;
}
