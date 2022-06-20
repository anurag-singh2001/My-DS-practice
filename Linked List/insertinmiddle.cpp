Node *insertInMiddle(Node *head, int x)
{
    // Code here
    Node *temp = new Node(x);
    if (head == NULL)
        return temp;
    Node *slow = head, *fast = head, *prev = NULL;
    while (fast != NULL and fast->next != NULL)
    {

        prev = slow;
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast == NULL)
    {
        temp->next = slow;
        prev->next = temp;
    }
    else
    {
        temp->next = slow->next;
        slow->next = temp;
    }
    return head;
}