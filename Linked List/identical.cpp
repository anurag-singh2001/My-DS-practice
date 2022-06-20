bool areIdentical(struct Node *head1, struct Node *head2)
{
    // Code here
    Node *ptr1 = head1;
    Node *ptr2 = head2;

    while (ptr1 != NULL and ptr2 != NULL)
    {
        if (ptr1->data != ptr2->data)
            return false;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    if (ptr1 != NULL)
        return false;
    if (ptr2 != NULL)
        return false;
    return true;
}