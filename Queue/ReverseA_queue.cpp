void reverse(queue<int> &q)
{

    if (q.empty())
        return;

    int ele = q.front();
    q.pop();
    reverse(q);
    q.push(ele);
}
queue<int> rev(queue<int> q)
{
    // add code here.
    reverse(q);
    return q;
}