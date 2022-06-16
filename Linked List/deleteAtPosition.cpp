Node *deleteHead(Node *head)
{
    if (head == NULL)
        return NULL;
    if (head->next == head)
    {
        delete head;
        return NULL;
    }
    Node *temp = head->next;
    head->data = temp->data;
    head->next = head->next->next;
    delete temp;
    return head;
}

Node *deleteAtPosition(Node *head, int pos)
{
    // Your code here
    if (pos == 1)
        return deleteHead(head);

    Node *curr = head;
    for (int i = 0; i < pos - 2; i++)
        curr = curr->next;
    Node *temp = curr->next;
    curr->next = curr->next->next;
    delete temp;
    return head;
}