Node *copyList(Node *head)
{
    // Write your code here
    if (head == NULL)
        return head;

    Node *t = head;
    while (t != NULL)
    {
        Node *n = new Node(t->data);
        n->next = t->next;
        t->next = n;
        t = n->next;
    }

    t = head;
    Node *head2 = head->next;
    while (t != NULL)
    {
        if (t->arb == NULL)
            t->next->arb = NULL;
        else
            t->next->arb = t->arb->next;

        t = t->next->next;
    }

    t = head;
    while (t != NULL)
    {
        head = t->next->next;

        if (head)
            t->next->next = head->next;
        else
            t->next->next = NULL;

        t->next = head;
        t = head;
    }

    return head2;
}