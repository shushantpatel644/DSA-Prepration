// #include <iostream>
// using namespace std;

// class person
// {

// public:
//     int a = 19;
//     void show()
//     {
//         cout << "The Value of a is :-" << a;
//     }
// };

// int main()
// {
//     person obj;
//     obj.show();
//     return 0;
// }

// // class Print
// // {
// // public:
// //     void show(int a)
// //     {cd
// //         cout << "hello sir" << endl;
// //         cin >> a;
// //     }
// //     void print()
// //     {
// //         cout << "The value of a is :" a << endl;
// //     }
// // };
// // int main()
// // {
// //     Print obj;
// //     obj.show();
// //     obj.print();
// //     return 0;
// // }

#include <iostream>
using namespace std;

class person
{
public:
    int name;
    int age;
    int weight;
    int height;
    void namee()
    {
        cout << "Enter the name of the person";
        cin >> name;
    }
    void agee()
    {
        cout << "Enter the age";
        cin >> age;
    }
    void output()
    {
        cout << "The age of that person is" << age << endl;
    }
    void weightt()
    {
        cout << "Curent weigth of the that person";
        cin >> weight;
    }
    void heightt()
    {
        cin >> height;
    }
};
int main()
{
    person myObj;
    myObj.agee();
    myObj.output();
}
