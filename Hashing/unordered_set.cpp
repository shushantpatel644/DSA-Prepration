#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(2);
    s.insert(15);
    s.insert(6);
    s.insert(24);
    s.insert(9);

    for (auto it = s.begin(); it != s.end(); it++)
        cout << (*it) << endl; // o(1)
    cout << "Number of element" << s.size() << endl;

    // o(1)

    // s.clear();

    // int key = 24;

    // if (s.find(key) == s.end())
    // {
    //     cout << "Key not found" << endl;
    // }
    // else
    // {
    //     auto temp = s.find(key);
    //     s.erase(temp);
    //     // cout << "key found";
    // }

    // int deleted_key = 15;
    // s.erase(deleted_key);

    // for (auto it = s.begin(); it != s.end(); it++)
    //     cout << (*it) << endl; // o(1)

    // cout << "Number of element" << s.size() << endl;

    // if (s.find(key) != s.end())
    //     cout << "key found" << endl;

    // if (s.count(60))
    // {
    //     cout << "key found" << endl;
    // }
    // else
    // {
    //     cout << "not found" << endl;
    // }
}