int maxConsecutiveOnes(int N)
{
    // code here
    int c = 0;
    int mx = 0;
    while (N > 0)
    {
        if (N % 2 == 1)
            c++;
        else
            c = 0;
        if (c > mx)
            mx = c;
        N >>= 1;
    }
    return mx;
}