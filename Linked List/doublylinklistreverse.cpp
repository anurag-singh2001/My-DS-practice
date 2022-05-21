Node *reverseDLL(Node *head)
{
    // Your code here
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return head;
    Node *curr = head;
    Node *ford = head;
    while (curr->next != NULL)
    {
        ford = curr->next;
        curr->next = curr->prev;
        curr->prev = ford;
        curr = ford;
    }
    curr->next = curr->prev;
    curr->prev = NULL;
    head = curr;
    return head;
}