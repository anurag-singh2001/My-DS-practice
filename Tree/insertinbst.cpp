Node *insert(Node *root, int Key)
{
    // Your code here
    if (root == NULL)
        return new Node(Key);

    if (root->data > Key)
        root->left = insert(root->left, Key);
    else if (root->data < Key)
        root->right = insert(root->right, Key);

    return root;
}