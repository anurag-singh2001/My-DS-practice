int countBitsFlip(int a, int b)
{

    // Your logic here
    int c = 0;
    int d = a ^ b;
    while (d > 0)
    {
        d = d & (d - 1);
        c++;
    }
    return c;
}