vector<int> noSibling(Node *node)
{
    // code here
    vector<int> v;

    if (node == NULL)
        v.push_back(-1);

    queue<Node *> q1;
    q1.push(node);

    int flag = 0;

    // While q1 is not empty
    while (!q1.empty())
    {
        struct Node *temp = q1.front();
        q1.pop();

        if (temp->left != NULL &&
            temp->right == NULL)
        {
            flag = 1;
            v.push_back(temp->left->data);
        }

        if (temp->left == NULL &&
            temp->right != NULL)
        {
            flag = 1;
            v.push_back(temp->right->data);
        }

        if (temp->left != NULL)
        {
            q1.push(temp->left);
        }

        if (temp->right != NULL)
        {
            q1.push(temp->right);
        }
    }
    if (v.empty())
        v.push_back(-1);
    sort(v.begin(), v.end());

    return v;
}