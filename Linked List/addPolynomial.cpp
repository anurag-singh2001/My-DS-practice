Node *addPolynomial(Node *p1, Node *p2)
{
    // Your code here
    if (p1 == NULL)
        return p2;

    if (p2 == NULL)
        return p1;

    Node *curr1 = p1->pow >= p2->pow ? p1 : p2;
    Node *curr2 = p1->pow >= p2->pow ? p2 : p1;

    Node *prev = NULL;
    while (curr1 != NULL and curr2 != NULL)
    {
        if (curr1->pow == curr2->pow)
        {
            curr1->coeff += curr2->coeff;
            prev = curr1;
            curr1 = curr1->next;
            curr2 = curr2->next;
        }
        else if (curr1->pow > curr2->pow)
        {
            prev = curr1;
            curr1 = curr1->next;
        }
        else
        {
            if (prev != NULL)
                prev->next = curr2;
            prev = curr2;
            Node *next = curr2->next;
            curr2->next = curr1;
            curr2 = next;
        }
    }

    while (curr2 != NULL)
    {
        prev->next = curr2;
        prev = prev->next;
        curr2 = curr2->next;
    }
    return p1->pow >= p2->pow ? p1 : p2;
}