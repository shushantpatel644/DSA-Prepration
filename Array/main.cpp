#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {3, 4, 5, 6, 3};
    int arr1[] = {2, 3, 4, 5, 6, 6, 7, 88, 9};

    cout << arr[3] << endl;
    cout << arr1[4] << endl;

    cout << "Ans : " << arr1[3 / 2] << endl;

    int a[5] = {};
    cout << a[4] << endl;
}