Node *insertInHead(Node *head, int data)
{
    // Your code here
    Node *temp = new Node(data);
    if (head == NULL)
    {
        temp->next = head;
        return temp;
    }
    Node *curr = head;
    while (curr->next != head)
    {
        curr = curr->next;
    }
    curr->next = temp;
    temp->next = head;
    return temp;
}