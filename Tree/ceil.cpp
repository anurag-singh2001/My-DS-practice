int findCeil(Node *root, int input)
{
    if (root == NULL)
        return -1;

    int res = -1;
    while (root)
    {
        if (root->data == input)
            return root->data;
        if (root->data < input)
            root = root->right;
        else
        {
            res = root->data;
            root = root->left;
        }
    }
    return res;
}