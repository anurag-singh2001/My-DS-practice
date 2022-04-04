int maxOnes(vector<vector<int>> &Mat, int N, int M)
{
    // your code here
    int max = 0, index = 0;
    for (int i = 0; i < N; i++)
    {
        int c = 0;
        for (int j = 0; j < M; j++)
        {
            if (Mat[i][j] == 1)
                c++;
        }
        if (c > max)
        {
            max = c;
            index = i;
        }
    }
    return index;
}