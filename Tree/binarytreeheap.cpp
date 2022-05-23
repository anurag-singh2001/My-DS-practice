bool isHeap(struct Node *tree)
{
    // code here
    queue<Node *> q;
    q.push(tree);
    bool isNull = false;
    while (!q.empty())
    {
        Node *temp = q.front();
        q.pop();
        if (temp->left)
        {
            if (temp->data < temp->left->data || isNull)
                return false;
            q.push(temp->left);
        }
        else
            isNull = true;
        if (temp->right)
        {
            if (temp->data < temp->right->data || isNull)
                return false;
            q.push(temp->right);
        }
        else
            isNull = true;
    }
    return true;
}