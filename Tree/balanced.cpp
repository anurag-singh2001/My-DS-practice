int height(struct Node *node)
{
    if (node == NULL)
        return 0;
    return 1 + max(height(node->left), height(node->right));
}
bool isBalanced(Node *root)
{
    //  Your Code here
    if (root == NULL)
        return 1;

    int lheight = height(root->left);
    int rheight = height(root->right);

    if (abs(lheight - rheight) <= 1 && isBalanced(root->left) && isBalanced(root->right))
        return 1;

    return 0;
}