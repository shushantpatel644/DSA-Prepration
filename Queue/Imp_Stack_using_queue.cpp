#include <iostream>
#include <queue>
using namespace std;
// here two approach 1 is uncomment and 2nd is in comment lines :)
class MyStack
{
public:
    queue<int> q1, q2;
    MyStack()
    {
    }
    void push(int x)
    {
        // st.push(x);
        while (!q1.empty())
        {
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        while (!q2.empty())
        {
            q1.push(q2.front());
            q2.pop();
        }
    }

    int pop()
    {
        // int val = st.top();
        // st.pop();
        // return val;
        int val = q1.front();
        q1.pop();
        return val;
    }

    int top()
    {
        // int t=st.top();
        // return t;
        return q1.front();
    }

    bool empty()
    {
        return q1.empty();
        // if(st.empty()){
        //     return true;
        // }
        // return false;
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */