bool identical(Node *root1, Node *root2)
{
    if (root1 == NULL && root2 == NULL)
        return true;

    if (root1 == NULL || root2 == NULL)
        return false;
    return (root1->data == root2->data &&
            identical(root1->left, root2->left) &&
            identical(root1->right, root2->right));
}

bool isSubTree(Node *T, Node *S)
{
    // Your code here
    if (S == NULL)
        return true;
    if (T == NULL)
        return false;

    if (identical(T, S))
        return true;

    return isSubTree(T->left, S) || isSubTree(T->right, S);
}