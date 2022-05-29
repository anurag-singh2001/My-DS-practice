bool isBST(Node *root, int a, int b)
{
    if (!root)
        return true;
    if (root->data >= a || root->data <= b)
        return false;
    else
        isBST(root->left, root->data, b) and isBST(root->right, a, root->data);
}

int nodeCount(Node *root)
{
    if (!root)
        return 0;
    else
        return 1 + nodeCount(root->left) + nodeCount(root->right);
}

int largestBst(Node *root)
{
    // Your code here
    if (!root)
        return 0;
    if (isBST(root, INT_MAX, INT_MIN))
        return nodeCount(root);
    else
        return max(largestBst(root->left), largestBst(root->right));
}