#include <stdio.h>

void printArray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d", A[i]);
    } 
    printf("\n");
}
void bubblesort(int *A, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    { // for num of pass
        for (int j = 1; j < n - 1 - 1; j++)
        {
            // har pass ke baad kam hogi tabi n-1-i hoga 5 com 4 com 3 comp 2 comp (for comprasion in each pass)

            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
    }
}
void bubblesortAdaptive(int *A, int n)
{
    int temp;
    int isSorted = 1;
    for (int i = 0; i < n - 1; i++)
    { // for num of pass
        printf("Working on pass number %d", i + 1);
        isSorted = 1;
        for (int j = 1; j < n - 1 - 1; j++)
        {
            // har pass ke baad kam hogi tabi n-1-i hoga 5 com 4 com 3 comp 2 comp (for comprasion in each pass)

            if (A[j] > A[j + 1])
            {
                temp = A[j];
                A[j] = A[j + 1];
                A[j + 1] = temp;
            }
        }
        if (isSorted)
        {
            return;
        }
    }
}
int main()
{
    int A[] = {12, 13, 45, 34, 67, 90};
    int n = 6;
    printArray(A, n); // print the array before sorting
    bubbleSort(A, n); // function to sort thr array
    printArray(A, n); // printing the array before sorting
    return 0;
}