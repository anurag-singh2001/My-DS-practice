void deleteNode(struct Node **head, int key)
{

    // Your code goes here
    Node *ptr = *head;
    while (ptr->next->data != key)
    {
        ptr = ptr->next;
    }
    Node *del = ptr->next;
    ptr->next = ptr->next->next;
    delete del;
}

/* Function to reverse the linked list */
void reverse(struct Node **head_ref)
{

    // Your code goes here
    Node *p = NULL;
    Node *c = *head_ref;
    Node *q = NULL;

    while (c->next != NULL)
    {
        q = c->next;
        c->next = p;
        p = c;
        c = q;
    }
    c->next = p;
    *head_ref = p;
}