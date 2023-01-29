#include <iostream>
#include <queue>
using namespace std;

void show(queue<int> queue1)
{
    queue<int> q = queue1;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    cout << endl;
}
int main()
{
    queue<int> q;
    q.push(1);
    q.push(3);
    q.push(-4);
    q.push(5);
    q.push(6);

    show(q);
    cout << "Size :" << q.size() << endl;
    cout << "Front :" << q.front() << endl;
    cout << "Back :" << q.back() << endl;

    q.pop();
    show(q);

    cout << "Size :" << q.size() << endl;
    cout << "Front :" << q.front() << endl;
    cout << "Back :" << q.back() << endl;
}