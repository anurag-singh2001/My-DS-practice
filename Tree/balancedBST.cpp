Node *inorderToBST(int start, int end, vector<int> &v)
{

    if (start > end)
        return NULL;

    int mid = (start + end) / 2;
    Node *root = new Node(v[mid]);
    root->left = inorderToBST(start, mid - 1, v);
    root->right = inorderToBST(mid + 1, end, v);

    return root;
}

void inorder(Node *root, vector<int> &v)
{

    if (root == NULL)
        return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

Node *buildBalancedTree(Node *root)
{
    // Code here
    if (root == NULL)
        return root;

    vector<int> v;
    inorder(root, v);
    int start = 0;
    int end = v.size() - 1;

    Node *ans = inorderToBST(start, end, v);
    return ans;
}