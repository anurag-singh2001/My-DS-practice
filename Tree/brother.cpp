void inorder(Node *root, unordered_map<int, int> &m)
{
    if (!root)
        return;
    inorder(root->left, m);
    m[root->data]++;
    inorder(root->right, m);
}

int countPairs(Node *root1, Node *root2, int x)
{
    unordered_map<int, int> m1, m2;
    inorder(root1, m1);
    inorder(root2, m2);
    int ans = 0;
    for (auto it : m1)
    {
        int temp = x - it.first;
        if (m2[temp])
            ans++;
    }
    return ans;
}