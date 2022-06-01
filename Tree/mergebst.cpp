class Solution
{
public:
    vector<int> v;
    vector<int> ans;

    void inorder(Node *root)
    {

        if (root == NULL)
            return;
        inorder(root->left);
        v.push_back(root->data);
        inorder(root->right);
    }

    // Function to return a list of integers denoting the node
    // values of both the BST in a sorted order.
    vector<int> merge(Node *root1, Node *root2)
    {
        // Your code here

        inorder(root1);
        ans.insert(ans.end(), v.begin(), v.end());
        v.clear();
        inorder(root2);
        ans.insert(ans.end(), v.begin(), v.end());
        sort(ans.begin(), ans.end());
        return ans;
    }
};
