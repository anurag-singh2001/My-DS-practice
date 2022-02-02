int minval(Node *root)
{
    int minv = root->data;
    while (root->left != NULL)
    {
        minv = root->left->data;
        root = root->left;
    }
    return minv;
}

Node *deleteNode(Node *root, int X)
{
    // your code goes here
    if (root == NULL)
        return NULL;

    if (X < root->data)
        root->left = deleteNode(root->left, X);
    else if (X > root->data)
        root->right = deleteNode(root->right, X);
    else
    {
        if (root->left == NULL)
            return root->right;
        else if (root->right == NULL)
            return root->left;
        root->data = minval(root->right);
        root->right = deleteNode(root->right, root->data);
    }

    return root;
}