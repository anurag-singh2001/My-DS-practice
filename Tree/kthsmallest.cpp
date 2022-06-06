
int ans = -1;
int c = 0;
// Return the Kth smallest element in the given BST
int KthSmallestElement(Node *root, int K)
{
    // add code here.
    if (root == NULL)
        return ans;
    KthSmallestElement(root->left, K);
    c++;
    if (c == K)
    {
        ans = root->data;
        return ans;
    }
    KthSmallestElement(root->right, K);
}