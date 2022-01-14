int getNthFromLast(Node *head, int n)
{
    // Your code here
    Node *ptr = head;
    int c = 0;
    while (ptr != NULL)
    {
        ptr = ptr->next;
        c++;
    }
    if (n > c || n < 1)
        return -1;
    int dif = c - n;
    Node *temp = head;
    for (int i = 0; i < dif; i++)
    {
        temp = temp->next;
    }
    return temp->data;
}