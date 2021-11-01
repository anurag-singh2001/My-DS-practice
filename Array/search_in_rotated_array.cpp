int search(int A[], int l, int h, int key)
{

    //complete the function here
    while (l <= h)
    {
        int mid = (l + h) / 2;
        if (A[mid] == key)
            return mid;
        if (A[l] <= A[mid])
        {
            if (key >= A[l] && key < A[mid])
                h = mid - 1;
            else
                l = mid + 1;
        }
        else
        {
            if (key > A[mid] && key <= A[h])
                l = mid + 1;
            else
                h = mid - 1;
        }
    }
    return -1;
}