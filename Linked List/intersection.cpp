void insertLast(Node *&head, Node *&tail, int x)
{

    Node *temp = new Node(x);
    if (head == NULL)
    {
        head = tail = temp;
        return;
    }
    tail->next = temp;
    tail = temp;
}

Node *findIntersection(Node *head1, Node *head2)
{
    // Your Code Here
    Node *x = head1, *y = head2;
    Node *HeadRes = NULL, *TailRes = NULL;
    while (x != NULL and y != NULL)
    {
        if (x->data < y->data)
            x = x->next;
        else if (x->data > y->data)
            y = y->next;
        else
        {
            insertLast(HeadRes, TailRes, x->data);
            x = x->next;
            y = y->next;
        }
    }
    return HeadRes;
}