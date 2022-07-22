struct Node *pairwise_swap(struct Node *head)
{
    // your code here
    Node *ptr = head;
    while (ptr != NULL and ptr->next != NULL)
    {
        swap(ptr->data, ptr->next->data);
        ptr = ptr->next->next;
    }
    return head;
}