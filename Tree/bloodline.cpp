pair<int, int> help(Node *root)
{

    if (root == NULL)
        return {0, 0};
    pair<int, int> l = help(root->left);
    pair<int, int> r = help(root->right);
    int temp;

    if (l.second > r.second)
    {
        temp = l.first + root->data;
        return {temp, l.second + 1};
    }
    else if (r.second > l.second)
    {
        temp = r.first + root->data;
        return {temp, r.second + 1};
    }
    else
    {
        temp = max(l.first, r.first) + root->data;
        return {temp, l.second + 1};
    }
}

int sumOfLongRootToLeafPath(Node *root)
{
    // code here
    if (root == NULL)
        return 0;
    pair<int, int> ans = help(root);
    return ans.first;
}