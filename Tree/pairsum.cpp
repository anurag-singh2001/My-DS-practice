bool solve(Node *root, int X, unordered_set<int> &s)
{

    if (root == NULL)
        return false;
    if (solve(root->left, X, s))
        return true;
    if (s.find(X - root->data) != s.end())
        return true;
    else
        s.insert(root->data);
    return solve(root->right, X, s);
}

// Function to check if any pair exists in BST whose sum is equal to given value.
bool findPair(Node *root, int X)
{
    // Your code here
    unordered_set<int> s;
    return solve(root, X, s);
}