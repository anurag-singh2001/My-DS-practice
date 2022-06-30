int jos(int n, int k)
{
    if (n == 1)
        return 0;
    else
        return (jos(n - 1, k) + k) % n;
}

int josephus(int n, int k)
{
    // Your code here
    return jos(n, k) + 1;
}