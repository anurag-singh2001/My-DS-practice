Node *constructTree(int pre[], int &preindex, int key, int min, int max, int size)
{

    if (preindex >= size)
        return NULL;

    Node *root = NULL;
    if (key > min and key < max)
    {
        root = newNode(key);
        preindex++;
        if (preindex < size)
            root->left = constructTree(pre, preindex, pre[preindex], min, key, size);
        if (preindex < size)

            root->right = constructTree(pre, preindex, pre[preindex], key, max, size);
    }
    return root;
}

Node *post_order(int pre[], int size)
{
    // code here
    int preorderindex = 0;
    return constructTree(pre, preorderindex, pre[0], INT_MIN, INT_MAX, size);
}