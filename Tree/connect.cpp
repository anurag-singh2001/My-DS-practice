void connect(Node *root)
{
    // Your Code Here
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        int s = q.size() - 1;
        while (s--)
        {
            Node *root = q.front();
            q.pop();
            root->nextRight = q.front();
            if (root->left)
                q.push(root->left);
            if (root->right)
                q.push(root->right);
        }

        q.pop();
        if (q.empty())
            break;
        else
            q.push(NULL);
    }
}