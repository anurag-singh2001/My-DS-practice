void fillMap(Node *root, int d, int l, map<int, pair<int, int>> &m)
{
    if (root == NULL)
        return;

    if (m.count(d) == 0)
        m[d] = make_pair(root->data, l);
    else if (m[d].second > l)
        m[d] = make_pair(root->data, l);

    fillMap(root->left, d - 1, l + 1, m);
    fillMap(root->right, d + 1, l + 1, m);
}

vector<int> topView(Node *root)
{
    // Your code here
    map<int, pair<int, int>> m;
    vector<int> v;
    fillMap(root, 0, 0, m);
    for (auto it = m.begin(); it != m.end(); it++)
    {

        v.push_back(it->second.first);
    }

    return v;
}