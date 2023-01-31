#include <iostream>
#include <set>
using namespace std;

class unionOfTwoArray
{
public:
    // Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)
    {
        // code here
        set<int> mp;

        for (int i = 0; i < n; i++)
        {
            mp.insert(a[i]);
        }
        for (int i = 0; i < m; i++)
        {
            mp.insert(b[i]);
        }
        return mp.size();
    }
};
