vector<int> levelOrder(Node *node)
{
    // Your code here
    vector<int> v;
    Node *cur = node;
    queue<Node *> q;
    q.push(cur);
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        v.push_back(temp->data);

        if (temp->left)
            q.push(temp->left);
        if (temp->right)
            q.push(temp->right);
    }
    return v;
}