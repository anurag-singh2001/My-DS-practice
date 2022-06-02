int LISS(Node *root)
{
    // Code here
    if (!root)
        return 0;
    if (!root->left and !root->right)
        return 1;

    int cLISS = 0;
    int nLISS = 0;

    nLISS += LISS(root->left) + LISS(root->right);
    cLISS += 1;

    if (root->left)
        cLISS += LISS(root->left->left) + LISS(root->left->right);
    if (root->right)
        cLISS += LISS(root->right->left) + LISS(root->right->right);
    return max(cLISS, nLISS);
}