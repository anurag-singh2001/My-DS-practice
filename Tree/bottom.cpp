void fillMap(Node *root, int d, int l, map<int, pair<int, int>> &m)
{
    if (root == NULL)
        return;

    if (m.find(d) == m.end())
        m[d] = make_pair(root->data, l);
    else
    {
        if (m[d].second <= l)
        {
            m[d] = make_pair(root->data, l);
        }
    }

    fillMap(root->left, d - 1, l + 1, m);
    fillMap(root->right, d + 1, l + 1, m);
}

vector<int> bottomView(Node *root)
{
    // Your Code Here
    map<int, pair<int, int>> m;
    vector<int> v;
    fillMap(root, 0, 0, m);
    for (auto it = m.begin(); it != m.end(); it++)
    {

        v.push_back(it->second.first);
    }

    return v;
}