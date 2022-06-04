void inorder(Node *root, vector<int> &v)
{

    if (!root)
        return;
    inorder(root->left, v);
    v.push_back(root->data);
    inorder(root->right, v);
}

float findMedian(struct Node *root)
{
    // Code here
    vector<int> v;
    inorder(root, v);
    int n = v.size();

    sort(v.begin(), v.end());
    float ans;

    if (n % 2 == 0)

        ans = (v[n / 2] + v[(n / 2) - 1]) / 2.0;
    else
        ans = v[(n) / 2.0];

    return ans;
}