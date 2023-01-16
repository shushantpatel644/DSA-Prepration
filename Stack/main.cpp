#include <iostream>
#include <stack>
using namespace std;

void printElementOfStack(stack<int> s)
{
    while (!s.empty())
    {
        cout << s.top() << endl;
        s.pop();
    }
}
int main()
{
    stack<int> s;
    s.push(3);
    s.push(4);
    s.push(-5);
    s.push(9);

    cout << "Stack is Empty : " << s.empty() << endl;
    cout << "Size of Stack is : " << s.size() << endl;

    cout << "Elements in stack :- " << endl;
    printElementOfStack(s);
}