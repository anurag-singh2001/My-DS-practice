int sum = 0;
void transformTree(struct Node *root)
{
    // code here
    if (!root)
        return;
    transformTree(root->right);
    int temp = sum;
    sum += root->data;
    root->data = temp;
    transformTree(root->left);
}