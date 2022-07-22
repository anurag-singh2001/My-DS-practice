int countNodesinLoop(struct Node *head)
{
    // Code here
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (slow == fast)
            break;
    }
    if (slow != fast)
        return 0;

    int c = 1;
    fast = fast->next;
    while (fast != slow)
    {
        fast = fast->next;
        c++;
    }
    return c;
}