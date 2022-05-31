pair<int, int> solve(Node *root)
{
    if (root == NULL)
        return {0, 0};
    pair<int, int> l = solve(root->left);
    pair<int, int> r = solve(root->right);

    pair<int, int> temp;
    temp.first = l.second + r.second + root->data;
    temp.second = max(l.first, l.second) + max(r.first, r.second);
    return temp;
}

// Function to return the maximum sum of non-adjacent nodes.
int getMaxSum(Node *root)
{
    // Add your code here
    if (root == NULL)
        return 0;
    pair<int, int> ans = solve(root);
    return max(ans.first, ans.second);
}