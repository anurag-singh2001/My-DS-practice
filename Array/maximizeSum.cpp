long long int maximizeSum(long long int a[], int n, int k)
{
    // Your code goes here
    sort(a, a + n);
    int i = 0;
    while (k > 0)
    {
        if (a[i] < 0)
        {
            a[i] = a[i] * (-1);
            i++;
        }
        else
            break;
        k--;
    }
    sort(a, a + n);
    while (k > 0)
    {
        a[0] = a[0] * (-1);
        k--;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = sum + a[i];
    }
    return sum;
}