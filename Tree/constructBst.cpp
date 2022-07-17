Node *insert(Node *root, int k)
{

    if (root == NULL)
    {
        Node *temp = new Node(k);
        return temp;
    }
    if (k < root->data)
    {
        root->left = insert(root->left, k);
    }
    else
    {
        root->right = insert(root->right, k);
    }
    return root;
}

Node *constructBst(int arr[], int n)
{
    // Code here
    Node *root = new Node(arr[0]);
    for (int i = 1; i < n; i++)
        insert(root, arr[i]);

    return root;
}