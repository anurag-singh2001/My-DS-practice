void moveZeroes(struct Node **head)
{
    // Your code here
    Node *cur = *head, *prev = *head;
    cur = cur->next;
    while (cur)
    {
        if (cur->data == 0)
        {
            prev->next = cur->next;
            cur->next = *head;
            *head = cur;
            cur = prev->next;
        }
        else
        {
            prev = cur;
            cur = cur->next;
        }
    }
}