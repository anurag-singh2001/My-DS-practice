vector<int> verticalOrder(Node *root)
{
    // Your code here
    vector<int> v;
    queue<pair<Node *, int>> q;
    map<int, vector<int>> m;
    q.push({root, 0});
    while (!q.empty())
    {

        auto it = q.front();
        q.pop();
        Node *node = it.first;
        int line = it.second;
        m[line].push_back(node->data);

        if (node->left != NULL)
            q.push({node->left, line - 1});

        if (node->right != NULL)
            q.push({node->right, line + 1});
    }
    for (auto it : m)
    {
        for (auto i : m[it.first])
            v.push_back(i);
    }
    return v;
}