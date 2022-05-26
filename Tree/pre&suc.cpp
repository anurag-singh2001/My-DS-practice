void findPreSuc(Node *root, Node *&pre, Node *&suc, int key)
{

    // Your code goes here
    if (root == NULL)
        return;

    findPreSuc(root->left, pre, suc, key);
    if (root and root->key < key)
        pre = root;
    else if (root and root->key > key)
    {
        if (suc == NULL)
            suc = root;
    }
    findPreSuc(root->right, pre, suc, key);
}