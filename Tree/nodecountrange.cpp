int c = 0;
int getCount(Node *root, int l, int h)
{
    // your code goes here
    if (root == NULL)
        return 0;
    if (root->data >= l and root->data <= h)
        c++;
    getCount(root->left, l, h);
    getCount(root->right, l, h);
    return c;
}