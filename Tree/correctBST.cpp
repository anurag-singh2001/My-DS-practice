void inorder(Node *root, Node *&prev, Node *&first, Node *&second)
{

    if (root == NULL)
        return;
    inorder(root->left, prev, first, second);

    if (prev != NULL and prev->data > root->data)
    {
        if (first == NULL)
            first = prev;
        second = root;
    }
    prev = root;
    inorder(root->right, prev, first, second);
}

void correctBST(struct Node *root)
{
    // add code here.
    if (root == NULL)
        return;
    Node *prev = NULL;
    Node *first = NULL;
    Node *second = NULL;

    inorder(root, prev, first, second);
    int temp = first->data;
    first->data = second->data;
    second->data = temp;
}