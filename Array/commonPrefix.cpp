string longestCommonPrefix(string arr[], int N)
{
    // your code here
    string s;
    int c = 1;
    for (int i = 0; i < arr[0].size(); i++)
    {
        for (int j = 0; j < N; j++)
            if (arr[0][i] == arr[j][i])
                continue;
            else
                c = 0;

        if (c)
            s.push_back(arr[0][i]);
        else
            break;
    }
    if (s.size())
        return s;
    else
        return "-1";
}