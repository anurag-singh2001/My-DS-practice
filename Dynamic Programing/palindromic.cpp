long long int countPS(string str)
{
    // Your code here
    int n = str.length(), m = 1e9 + 7;
    vector<long long int> c(n, 0);
    vector<long long int> p(n, 0);

    for (int i = n - 1; i >= 0; i--)
    {

        for (int j = i; j < n; j++)
        {
            if (i == j)
                c[j] = 1;
            else if (str[i] == str[j])
                c[j] = (c[j - 1] + p[j] + 1) % m;
            else
                c[j] = (c[j - 1] + p[j] - p[j - 1] + m) % m;
        }
        p = c;
    }
    return p[n - 1];
}