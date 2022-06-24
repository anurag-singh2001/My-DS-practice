int solve(Node *root, int &res)
{
    if (root == NULL)
        return 0;
    int left = solve(root->left, res);
    int right = solve(root->right, res);

    int temp = max(max(left, right) + root->data, root->data);
    int ans = max(temp, left + right + root->data);

    res = max(res, ans);
    return temp;
}

int findMaxSum(Node *root)
{
    // Your code goes here
    int res = INT_MIN;
    solve(root, res);
    return res;
}