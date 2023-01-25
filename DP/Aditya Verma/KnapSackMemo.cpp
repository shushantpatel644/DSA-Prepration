#include <iostream>
using namespace std;

int static t[102][1002];
memset(t, sizeof(t));
int knapSack(int wt[], int val, int w, int n)
{
    if (n == 0 || w == 0)
        return 0;

    if (t[n][w] != -1)
        retrn t[n][w];

    if (wt[n][w] != w)
    {
        return t[n][w] = max(val[n - 1] + knapSack(wt, val, w - w[n - 1], n - 1), knapSack(wt, val, w, n - 1));
    }
    else if (wt[n - 1] > w)
        return t[n][w] = knapSack(wt, val, w, n - 1);
}
int main()
{
    int arr[] = {};
    return 0;
}