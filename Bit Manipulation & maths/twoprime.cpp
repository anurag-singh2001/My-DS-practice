vector<int> primeDivision(int N)
{
    // code here
    // Sieve of Eratosthenes

    vector<bool> sieve(N, true);
    sieve[0] = false;
    sieve[1] = false;

    for (int i = 2; i * i < N; i++)
    {
        if (sieve[i])
        {
            for (int j = i * i; j < N; j += i)
                sieve[j] = false;
        }
    }
    for (int i = 2; i < N; i++)
    {
        if (sieve[i] && sieve[N - i])
            return {i, N - i};
    }
    return {};
}