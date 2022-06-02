void inorder(Node *root, vector<int> &nums)
{
    if (root == NULL)
        return;
    inorder(root->left, nums);
    nums.push_back(root->data);
    inorder(root->right, nums);
}

bool areAnagrams(Node *root1, Node *root2)
{
    vector<int> num1, num2;
    inorder(root1, num1);
    inorder(root2, num2);

    reverse(num1.begin(), num1.end());
    if (num1.size() != num2.size())
        return false;
    for (int i = 0; i < num1.size(); i++)
    {
        if (num1[i] != num2[i])
            return false;
    }
    return true;
}