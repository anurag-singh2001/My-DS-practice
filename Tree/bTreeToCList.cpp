Node *tail = NULL, *temp = NULL;

void inorder(Node *root)
{

    if (!root)
        return;
    inorder(root->right);
    root->right = tail;
    if (tail)
        tail->left = root;
    tail = root;
    if (!temp)
        temp = tail;
    inorder(root->left);
}

Node *bTreeToCList(Node *root)
{
    // add code here.
    tail = NULL, temp = NULL;
    inorder(root);
    temp->right = tail;
    tail->left = temp;

    return tail;
}