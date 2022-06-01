int canRepresentBST(int arr[], int n)
{
    // code here
    int root = INT_MIN;
    stack<int> s;
    s.push(arr[0]);
    int i = 1;
    while (i < n)
    {
        while (arr[i] < s.top() and i < n)
        {
            if (arr[i] < root)
                return 0;
            s.push(arr[i]);
            i++;
        }
        while (s.top() < arr[i] and i < n)
        {
            root = s.top();
            s.pop();
            if (s.empty())
            {
                s.push(arr[i]);
                i++;
                break;
            }
        }
    }
    return 1;
}