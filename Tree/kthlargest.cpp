int x;
int larg(Node *root, int k, int &c)
{
    if (root == NULL || c > k)
        return 0;
    larg(root->right, k, c);
    c++;
    if (k == c)
    {
        x = root->data;
    }
    larg(root->left, k, c);
    return x;
}

int kthLargest(Node *root, int K)
{
    // Your code here
    int c = 0;
    int x = larg(root, K, c);
    return x;
}