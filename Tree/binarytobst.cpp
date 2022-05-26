void inorder(Node *root, vector<int> &v)
{
    if (!root)
        return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}
void create(Node *root, int &i, vector<int> v)
{

    if (!root)
        return;
    create(root->left, i, v);
    if (i != v.size())
        root->data = v[i++];
    create(root->right, i, v);
}

Node *binaryTreeToBST(Node *root)
{
    // Your code goes here
    vector<int> v;
    inorder(root, v);
    sort(v.begin(), v.end());
    int i = 0;
    create(root, i, v);
    return root;
}