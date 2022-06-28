int maxIndexDiff(int A[], int N)
{
    // Your code here
    int c = 0;
    for (int i = 0; i < N - 1; i++)
    {
        for (int j = N - 1; j > 0; j--)
        {
            if (A[i] <= A[j])
            {
                c = max(c, j - i);
                break;
            }
        }
    }
    return c;
}