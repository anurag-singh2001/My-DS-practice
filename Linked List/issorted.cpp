bool isSorted(Node *head)
{
    // Your code here
    bool noninc = true, nondec = true;
    Node *temp = head;

    while (temp->next)
    {
        if (temp->next->data < temp->data)
            noninc = false;
        else if (temp->next->data > temp->data)
            nondec = false;
        temp = temp->next;
    }
    return noninc || nondec;
}