int getMaxWidth(Node *root)
{

    // Your code here
    queue<Node *> q;
    q.push(root);
    int ans = 0;
    while (!q.empty())
    {
        queue<Node *> q;
        q.push(root);
        int ans = 0;
        while (!q.empty())
        {
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                Node *front = q.front();
                q.pop();
                if (front->left != NULL)
                    q.push(front->left);
                if (front->right != NULL)
                    q.push(front->right);
            }
            ans = max(ans, size);
        }
        return ans;
    }
}