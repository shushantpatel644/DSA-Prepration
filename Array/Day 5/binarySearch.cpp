int binarySearch(int a[], int key)
{
    int low = 0;
    int high = a.length() - 1;

    while (low < high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == key)
        {
            return mid;
        }
        else if (key > a[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

// recursive

int binarysearch(int a[], int key, int low, int high)
{
    if (low > high)
        return -1;
    int mid = (low + high) / 2;
    if (a[mid] == key)
        return mid;

    if (key > a[mid])
        return binarysearch(a, key, mid + 1, high);
    return binarysearch(a, key, low, mid - 1);
}