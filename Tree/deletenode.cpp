Node *deleteNode(Node *root, int k)
{
    // Your code here
    if (root == NULL)
        return NULL;
    Node *left = deleteNode(root->left, k);
    root->left = left;
    if (root->data >= k)
        return left;
    Node *right = deleteNode(root->right, k);
    root->right = right;

    return root;
}