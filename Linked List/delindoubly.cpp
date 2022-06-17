Node *deleteNode(Node *head_ref, int x)
{
    // Your code here
    Node *curr = head_ref;
    int pos = 0;
    while (curr)
    {
        pos++;
        if (pos == x)
            break;
        curr = curr->next;
    }
    if (curr->prev != NULL)
        (curr->prev)->next = curr->next;
    else
        head_ref = curr->next;

    if (curr->next != NULL)
        curr->next->prev = curr->prev;

    delete curr;
    return head_ref;
}