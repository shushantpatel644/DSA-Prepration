#include <bits/stdc++.h>

#include <iostream>
#include <string>
#include <vector>
#include <sstream>
using namespace std;

string ArrayRotation(int arr[], int arrLength)
{
    vector<int> list;
    int index = arr[0];
    int count = 0;

    while (count < arrLength)
    {
        list.push_back(arr[index]);
        index = (index % arrLength) + 1;
        if (index == arrLength)
        {
            index = 0;
        }
        count++;
    }
    ostringstream convert;
    for (int x = 0; x < list.size(); x++)
    {
        convert << list[x];
    }

    return convert.str();
}

int main()
{
    int A[] = {2, 3, 4, 1, 6, 10};
    int B[] = {3, 2, 1, 6};
    int C[] = {4, 3, 4, 3, 1, 2};

    cout << ArrayRotation(A, sizeof(A) / sizeof(A[0])) << endl; // 4161023
    cout << ArrayRotation(B, sizeof(B) / sizeof(B[0])) << endl; // 6321
    cout << ArrayRotation(C, sizeof(C) / sizeof(C[0])) << endl; // 124343
    return 0;
}