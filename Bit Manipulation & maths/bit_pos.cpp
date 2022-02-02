int findPosition(int N)
{
    // code here
    int i = 1, n = 1;
    while (n < N)
    {
        n *= 2;
        i++;
    }
    if (n == N)
        return i;
    return -1;
}