void inorder(Node *root, int low, int high, vector<int> &v)
{

    if (root == NULL)
        return;
    inorder(root->left, low, high, v);
    if (root->data >= low and root->data <= high)
        v.push_back(root->data);
    inorder(root->right, low, high, v);
}

vector<int> printNearNodes(Node *root, int low, int high)
{
    // code here
    vector<int> v;
    inorder(root, low, high, v);
    return v;
}