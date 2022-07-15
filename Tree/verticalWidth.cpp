int verticalWidth(Node *root)
{
    // Code here
    if (root == NULL)
        return 0;
    unordered_set<int> mp;
    mp.insert(0);
    queue<pair<Node *, int>> q;
    q.push({root, 0});
    while (!q.empty())
    {
        Node *temp = q.front().first;
        int md = q.front().second;
        q.pop();
        if (mp.find(md) == mp.end())
            mp.insert(md);
        if (temp->left)
            q.push({temp->left, md - 1});
        if (temp->right)
            q.push({temp->right, md + 1});
    }
    return mp.size();
}