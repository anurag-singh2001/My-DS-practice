Node *swapkthnode(Node *head, int n, int k)
{
    // Your Code here
    if (n % 2 == 1 && k == (n + 1) / 2)
    {
        return head;
    }
    if (k > n)
    {
        return head;
    }
    Node *l = head, *u = head;
    Node *lp = NULL, *up = NULL;
    if (k == n)
    {
        k = 1;
    }
    if (n % 2 == 0 && k == (n / 2) + 1)
    {
        k--;
    }
    int a = k;
    int b = n - k;
    while (a > 1)
    {
        lp = l;
        l = l->next;
        a--;
    }
    while (b > 0)
    {
        up = u;
        u = u->next;
        b--;
    }
    if (u->next == NULL)
    {
        u->next = l->next;
        l->next = NULL;
        up->next = l;
        return u;
    }
    if (l->next == u)
    {
        l->next = u->next;
        u->next = l;
        lp->next = u;
        return head;
    }
    Node *temp = l->next;
    Node *temp2 = u->next;
    u->next = NULL;
    up->next = l;
    lp->next = u;
    u->next = temp;
    l->next = temp2;
    return head;
}