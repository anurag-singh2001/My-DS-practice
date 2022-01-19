struct Node *reverseList(struct Node *head)
{
    struct Node *p = NULL;
    struct Node *c = head;
    struct Node *q = NULL;

    while (c != NULL)
    {
        q = c->next;
        c->next = p;
        p = c;
        c = q;
    }
    head = p;
    return p;
}
Node *addOne(Node *head)
{
    // Your Code here
    // return head of list after adding one
    head = reverseList(head);
    Node *curr = head;
    int c = 1;

    while (c)
    {
        curr->data += 1;
        if (curr->data < 10)
            return reverseList(head);
        else
            curr->data = 0;
        if (curr->next == NULL)
            break;
        else
            curr = curr->next;
    }
    curr->next = new Node(1);
    return reverseList(head);
}