TreeNode *buildtree(vector<int> &in, int i)
{

    if (i >= in.size())
        return NULL;

    TreeNode *root = new TreeNode(in[i]);
    root->left = buildtree(in, 2 * i + 1);
    root->right = buildtree(in, 2 * i + 2);

    return root;
}

void convert(Node *head, TreeNode *&root)
{
    // Your code here
    if (head == NULL)
        return;

    vector<int> ans;
    int i = 0;

    Node *ptr = head;
    while (ptr)
    {
        ans.push_back(ptr->data);
        ptr = ptr->next;
    }
    root = buildtree(ans, i);
}
