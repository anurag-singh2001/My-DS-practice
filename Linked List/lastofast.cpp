ListNode *moveToFront(ListNode *head)
{

    if (head == NULL || head->next == NULL)
        return head;
    ListNode *temp = head;
    ListNode *temp1 = NULL;

    while (temp->next != NULL)
    {
        temp1 = temp;
        temp = temp->next;
    }
    temp->next = head;
    temp1->next = NULL;
    head = temp;
    return head;
}