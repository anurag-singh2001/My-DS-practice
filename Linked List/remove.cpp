Node *removeDuplicates(Node *head)
{
    // your code goes here

    Node *temp = head, *prev = head;

    while (temp != NULL)
    {
        if (temp->data != prev->data)
        {
            prev->next = temp;
            prev = temp;
        }
        temp = temp->next;
    }

    if (prev != temp)
    {
        prev->next = NULL;
    }
    return head;
}