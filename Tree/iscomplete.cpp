int countNodes(Node *root)
{
    if (root == NULL)
        return (0);
    return (1 + countNodes(root->left) +
            countNodes(root->right));
}

bool isComplete(Node *root, int index, int number_nodes)
{

    if (root == NULL)
        return (true);

    if (index >= number_nodes)
        return (false);

    return (isComplete(root->left, 2 * index + 1, number_nodes) &&
            isComplete(root->right, 2 * index + 2, number_nodes));
}

bool isCompleteBT(Node *root)
{
    // code here
    int node_count = countNodes(root);
    int index = 0;
    return isComplete(root, index, node_count);
}