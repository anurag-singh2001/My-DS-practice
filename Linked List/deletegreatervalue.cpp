Node *compute(Node *head)
{
    // your code goes here
    if (head == NULL or head->next == NULL)
        return head;
    Node *nhead = compute(head->next);

    if (head->data >= nhead->data)
    {
        head->next = nhead;
        return head;
    }
    return nhead;
}