bool check(Node *n1, Node *n2)
{
    if (n1 == NULL and n2 == NULL)
        return true;

    if (n1 == NULL or n2 == NULL)
        return false;

    return check(n1->left, n2->right) and check(n1->right, n2->left);
}

bool IsFoldable(Node *root)
{
    // Your code goes here
    if (root == NULL)
        return true;
    return check(root->left, root->right);
}