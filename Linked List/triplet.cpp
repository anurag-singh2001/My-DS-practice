int countTriplets(struct Node *head, int x)
{
    // code here.
    vector<int> v;
    while (head)
    {
        v.push_back(head->data);
        head = head->next;
    }
    int n = v.size(), c = 0;
    if (v[0] > v[n - 1])
        reverse(v.begin(), v.end());
    for (int i = 0; i < n - 2; i++)
    {
        int l = i + 1, r = n - 1, s = x - v[i];
        while (l < r)
        {
            if (v[l] + v[r] < s)
                l += 1;
            else if (v[l] + v[r] > s)
                r -= 1;
            else
            {
                c += 1;
                l += 1;
                r -= 1;
            }
        }
    }
    return c;
}