int isStackPermutation(int N, vector<int> &A, vector<int> &B)
{
    stack<int> s;
    int i = 0;
    int n = A.size();

    for (int j = 0; j < n; j++)
    {
        s.push(A[j]);
        while (!s.empty() && s.top() == B[i])
        {
            s.pop();
            i++;
        }
    }
    if (i == n)
        return 1;
    else
        return 0;
}