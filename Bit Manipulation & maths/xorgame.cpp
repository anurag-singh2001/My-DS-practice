int xorCal(int k)
{
    // code here
    if (k == 1)
        return 2;

    if ((k & (k + 1)) == 0)
        return k / 2;

    return -1;
}