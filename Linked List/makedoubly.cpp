void makeDoubly(struct Node *head)
{
    // Your code here
    struct Node *ptr = head;
    while (ptr->next != NULL)
    {
        ptr->next->prev = ptr;
        ptr = ptr->next;
    }
}