int minDiff(Node *root, int k)
{
    // Your code here
    int res = INT_MAX;
    while (root != NULL)
    {
        if (root->data == k)
            return 0;
        if (root->data < k)
        {
            res = min(res, abs(root->data - k));
            root = root->right;
        }
        else
        {
            res = min(res, abs(root->data - k));
            root = root->left;
        }
    }
    return res;
}