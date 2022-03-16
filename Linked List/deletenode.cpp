Node *deleteNode(Node *head, int x)
{
    // Your code here
    Node *p, *q;
    p = head;
    int i = 0;
    if (x == 1)
    {
        head = head->next;
        return head;
    }
    while (i < x - 1)
    {
        q = p;
        p = p->next;
        i++;
    }
    if (p == NULL)
    {
        q->next = NULL;
        free(p);
        return head;
    }
    q->next = p->next;
    free(p);
    return head;
}
