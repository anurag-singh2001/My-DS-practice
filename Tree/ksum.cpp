void solve(Node *root, int k, int &count, vector<int> &v)
{

    if (root == NULL)
        return;

    v.push_back(root->data);
    solve(root->left, k, count, v);
    solve(root->right, k, count, v);

    int n = v.size();
    int sum = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        sum += v[i];
        if (sum == k)
            count++;
    }
    v.pop_back();
}

int sumK(Node *root, int k)
{
    // code here
    vector<int> v;
    int count = 0;
    solve(root, k, count, v);
    return count;
}