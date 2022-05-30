Node *ptr = NULL;

void populateNext(Node *root)
{
    // code here
    if (!root)
        return;

    populateNext(root->left);
    if (ptr)
        ptr->next = root;
    ptr = root;
    populateNext(root->right);
}