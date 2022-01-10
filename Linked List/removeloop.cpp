void removeLoop(Node *head)
{
    // code here
    
    int flag = 0;
    Node *fast = head;
    Node *slow = head;
    while (fast != NULL and fast->next != NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if (fast == slow)
        {
            flag = 1;
            break;
        }
    }

    if (flag == 1)
    {

        if (slow == head)
        {
            while (slow->next != fast)
                slow = slow->next;
            slow->next = NULL;
        }
        else
        {
            slow = head;

            while (fast->next != slow->next)
            {
                fast = fast->next;
                slow = slow->next;
            }
            fast->next = NULL;
        }
    }
}