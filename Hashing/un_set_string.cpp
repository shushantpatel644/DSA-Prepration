#include <iostream>
#include <string>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<string> s;

    s.insert("hii");
    s.insert("hello");
    s.insert("kashish");
    s.insert("mohit");

    for (auto it = s.begin(); it != s.end(); it++)
        cout << (*it) << endl;

    cout << "Total number of string size is :" << s.size() << endl;

    // string key = "hii";
    // s.erase(temp);

    string deleted_key = "hii";
    s.erase(deleted_key);

    for (auto it = s.begin(); it != s.end(); it++)
        cout << (*it) << endl; // o(1)

    cout << "Total number of string size is :" << s.size() << endl;

    if (s.count("hello"))
    {
        cout << "string found" << endl;
    }
    else
    {
        cout << "string not found" << endl;
    }
    cout << "Total number of string size is :" << s.size() << endl;
}