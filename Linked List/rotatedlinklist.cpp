Node *rotate(Node *head, int k)
{
    // Your code here
    if (k == 0)
        return NULL;
    Node *current = head;
    int count = 1;
    while (count < k && current != NULL)
    {
        current = current->next;
        count++;
    }
    if (current == NULL)
        return NULL;
    Node *kNode = current;

    while (current->next != NULL)
        current = current->next;

    current->next = head;
    head = kNode->next;
    kNode->next = NULL;
    return head;
}