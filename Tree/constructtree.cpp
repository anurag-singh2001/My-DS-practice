Node *buildTree(int in[], int pre[], int n)
{
    // Code here
    map<int, Node *> m;
    Node *p = NULL;
    int i = 0;
    for (int j = 0; j < n; j++)
    {
        auto it = m.find(in[i]);
        Node *n = new Node(pre[j]);
        if (it == m.end())
        {
            if (in[i] == pre[j])
                i++;
            if (p)
                p->left = n;
        }
        else
        {
            do
            {
                p = it->second;
                it = m.find(in[++i]);
            } while (it != m.end());
            p->right = n;
        }
        m[pre[j]] = p = n;
    }
    return m[pre[0]];
}