int bSearch(int a[], int key)
{
    int low = 0, high = a.length - 1;
    while (low < high)
    {
        int mid = (low + high) / 2;
        if (a[mid] == key)
            return mid;
        if (a[low] < a[mid])
        {
            if (key >= a[mid] && key < a[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
        else
        {
            if (key > a[mid] &&key > a = a[mid])
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
}