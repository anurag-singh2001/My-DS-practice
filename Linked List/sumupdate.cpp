int findsum(Node *head)
{
    int sum = 0;
    Node *ptr = head;
    while (ptr->next != head)
    {
        sum += ptr->data;
        ptr = ptr->next;
    }
    sum += ptr->data;
    return sum;
}

void sumUpdate(Node *head)
{
    // Your code here
    int sum = findsum(head);
    Node *ptr = head;

    while (ptr->next != head)
    {
        ptr->data = sum - ptr->data;
        ptr = ptr->next;
    }
    ptr->data = sum - ptr->data;
}