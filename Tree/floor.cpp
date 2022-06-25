int floor(Node *root, int key)
{
    // Your code goes here
    int res = -1;
    while (root)
    {
        if (root->data == key)
            return root->data;
        if (root->data > key)
            root = root->left;
        else
        {
            res = max(res, root->data);
            root = root->right;
        }
    }
    return res;
}