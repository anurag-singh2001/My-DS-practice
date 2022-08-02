int countSetBits(int n)
{
    // Your logic here
    int c = 0;
    for (int i = 1; i <= n; i *= 2)
    {
        c += (((n + 1) / i) / 2) * i;
        if (((n + 1) / i) % 2)
            c += (n + 1) % i;
    }
    return c;
}