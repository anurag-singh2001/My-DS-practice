Node *lca(Node *curr, int u, int v)
{
    if (!curr)
        return curr;
    if (curr->data == u or curr->data == v)
        return curr;
    Node *l = lca(curr->left, u, v);
    Node *r = lca(curr->right, u, v);
    if (l and r)
        return curr;
    return l ? l : r;
}

int no_t(Node *curr, int u, int pr)
{
    if (!curr)
        return 1000;
    if (curr->data == u)
        return 0;
    return min(no_t(curr->left, u, -1) + (pr == -1 ? 0 : 1), no_t(curr->right, u, 1) + (pr == 1 ? 0 : 1));
}

// function should return the number of turns required to go from first node to second node
int NumberOFTurns(struct Node *root, int first, int second)
{
    // Your code goes here
    Node *comm = lca(root, first, second);
    if (comm->data == first or comm->data == second)
    {
        int r = no_t(comm, (comm->data == first ? second : first), 0) - 1;
        return (r == 0 ? -1 : r);
    }
    else
    {
        int r1 = no_t(comm, first, 0);
        int r2 = no_t(comm, second, 0);
        return r1 + r2 - 1;
    }
}