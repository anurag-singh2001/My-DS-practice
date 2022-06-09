vector<pair<int, int>> findPairsWithGivenSum(Node *head, int target)
{
    // code here
    vector<pair<int, int>> ans;
    vector<int> v;

    Node *curr = head;
    while (curr != NULL)
    {
        v.push_back(curr->data);
        curr = curr->next;
    }
    int i = 0;
    int j = v.size() - 1;
    int sum = 0;
    while (i < j)
    {
        sum = v[i] + v[j];
        if (sum == target)
        {
            ans.push_back({v[i], v[j]});
            i++;
            j--;
        }
        if (sum > target)
            j--;
        if (sum < target)
            i++;
    }
    return ans;
}