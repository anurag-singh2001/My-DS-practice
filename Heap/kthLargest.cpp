void kthLargest(int arr[], int n, int k)
{
    // your code here
    priority_queue<int, vector<int>, greater<int>> pq;
    pq.push(arr[0]);
    if (k == 1)
        cout << arr[0] << " ";

    else
        cout << -1 << " ";

    for (int i = 1; i < n; i++)
    {
        if (pq.size() < k)
            pq.push(arr[i]);

        else if (arr[i] >= pq.top())
        {
            pq.pop();
            pq.push(arr[i]);
        }

        if (pq.size() < k)
            cout << -1 << " ";

        else
            cout << pq.top() << " ";
    }
}