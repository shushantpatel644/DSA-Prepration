// using 2 array
//  void merege(A[], B[], int m, int n)
//  {
//      int i, j, k;
//      i = j = k = 0;
//      while (i < m && i < n)
//      {
//          if (A[i] < B[j])
//          {
//              C[k] = A[i] i++;
//              k++;
//          }
//          // else
//          {
//              C[k] = B[j];
//              k++;
//              j++;
//          }
//      }
//      //copy all remaning elemet from a to c
//      while (i < m)
//      {
//          C[k] = A[i];
//          k++;
//          i++;
//      }
//      //from b to c
//      while (j < n)
//      {
//          C[k] = B[j];
//          k++;
//          j++;
//      }
//  }

// using single array

void printArray(int A[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << A[i] << endl;
    }
    cout << endl;
}
void merege(A[], int mid, int low, int high)
{
    int i, j, k;
    int B[high + 1];
    i = low;
    j = mid + 1;
    k = low;

    while (i <= mid && j <= high)
    {
        if (A[i] < A[j])
        {
            B[k++] = A[i++]
            // i++;
            // k++;
        }
        else
        {
            B[k] = A[j];
            k++;
            j++;
        }
    }
    // copy all remaning elemet from a to c
    while (i <= mid)
    {
        B[k] = A[i];
        k++;
        i++;
    }
    // from b to c
    while (j <= high)
    {
        B[k] = A[j];
        k++;
        j++;
    }
    for (int i = low; i <= high; i++)
    {
        A[i] = B[i];
    }
}

void meregeSort(Int A[], int low, int high)
{
    int mid;
    if (low < high)
    {
        mid = (low + high) / 2;
        meregeSort(A, low, mid);
        meregeSort(A, mid + 1, high);
        meregeSort(A, mid, low, high);
    }
}
int main()
{
    int A[] = {8, 3, 2, 1, 9, 5, 6};
    int n = 7;
    printArray(A, n);
    mergeSort();
    printArray(A, n);
    return 0;
}
// recursive merege sort

// void ms(int A[], int l, int h)
// {
//     if (l < h)
//     {
//         mid = (l + h) / 2;
//         ms(A, l, mid);
//         ms(A, mid + 1, h);
//         Merege(A, l, mid, h);
//     }
// }