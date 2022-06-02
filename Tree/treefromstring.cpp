Node *solve(string s, int &idx)
{
    if (idx >= s.size())
        return NULL;
    string num = "";
    while (idx < s.size() && s[idx] != '(' && s[idx] != ')')
    {
        num += s[idx];
        idx++;
    }
    Node *node = new Node(stoi(num));
    if (idx < s.size() && s[idx] == '(')
    {
        idx++;
        node->left = solve(s, idx);
        idx++;
        if (idx < s.size() && s[idx] == '(')
        {
            idx++;
            node->right = solve(s, idx);
            idx++;
        }
    }
    return node;
}

// function to construct tree from string
Node *treeFromString(string str)
{
    // code here
    int idx = 0;
    Node *temp = new Node(-1);
    return solve(str, idx);
}