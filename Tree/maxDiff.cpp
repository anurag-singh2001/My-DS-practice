int maxDiff(Node *root)
{
    // Your code here
    int s = INT_MIN;
    queue<pair<Node *, int>> q;
    q.push(make_pair(root, root->data));
    bool flag = 1;

    while (!q.empty())
    {

        int n = q.size();
        for (int i = 0; i < n; i++)
        {
            Node *temp = q.front().first;
            int temp1 = q.front().second;
            q.pop();
            if (flag == 1)
            {
                if (temp->left != NULL)
                    q.push(make_pair(temp->left, temp->data));
                if (temp->right != NULL)
                    q.push(make_pair(temp->right, temp->data));
                flag = 0;
            }
            else
            {
                s = max(s, temp1 - temp->data);
                int maxc = max(temp->data, temp1);
                if (temp->left != NULL)
                    q.push(make_pair(temp->left, maxc));

                if (temp->right != NULL)
                    q.push(make_pair(temp->right, maxc));
            }
        }
    }
    return s;
}
