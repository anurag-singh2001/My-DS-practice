bool isfeasible(int A[], int k, int res, int N)
{
    int student = 1;
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        if (sum + A[i] > res)
        {
            student++;
            sum = A[i];
        }
        else
            sum += A[i];
    }
    return student <= k;
}

int findPages(int A[], int N, int M)
{
    //code here
    int min = A[0];
    int max = 0;
    int res = 0;
    for (int i = 0; i < N; i++)
    {
        if (A[i] > min)
            min = A[i];
    }
    for (int i = 0; i < N; i++)
        max += A[i];
    while (min <= max)
    {
        int mid = (min + max) / 2;
        if (isfeasible(A, M, mid, N))
        {
            res = mid;
            max = mid - 1;
        }
        else
            min = mid + 1;
    }

    return res;
}