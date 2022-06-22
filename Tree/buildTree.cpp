int postindex;
Node *tree(int in[], int post[], int m, int n)
{
    if (m > n)
        return NULL;
    Node *temp = new Node(post[postindex--]);
    int index = 0;
    for (int i = m; i <= n; i++)
    {
        if (in[i] == temp->data)
        {
            index = i;
            break;
        }
    }
    temp->right = tree(in, post, index + 1, n);
    temp->left = tree(in, post, m, index - 1);
    return temp;
}

Node *buildTree(int in[], int post[], int n)
{
    // Your code here
    postindex = n - 1;
    return tree(in, post, 0, n - 1);
}
