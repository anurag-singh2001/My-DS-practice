void mirror(Node *node)
{
    // code here
    if (node == NULL)
        return;

    else
    {
        mirror(node->left);
        mirror(node->right);
        struct Node *temp = node->left;
        node->left = node->right;
        node->right = temp;
    }
}