vector<int> diagonal(Node *root)
{
    // your code here
    if (root == NULL)
        return {};
    queue<Node *> q;
    vector<int> v;
    q.push(root);
    while (!q.empty())
    {
        Node *curr = q.front();
        q.pop();
        while (curr)
        {
            if (curr->left)
                q.push(curr->left);
            v.push_back(curr->data);
            curr = curr->right;
        }
    }
    return v;
}