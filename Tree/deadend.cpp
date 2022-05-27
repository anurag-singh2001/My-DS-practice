bool end(Node *root, int low, int high)
{
    if (root == NULL)
        return false;
    if (root->data == low and root->data == high)
        return true;
    return end(root->left, low, root->data - 1) or end(root->right, root->data + 1, high);
}

bool isDeadEnd(Node *root)
{
    // Your code here
    return end(root, 1, INT_MAX);
}