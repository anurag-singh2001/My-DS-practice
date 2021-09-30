struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        if (!head)
        return NULL;
   
    struct node* current = head;
    struct node* next = NULL;
    struct node* prev = NULL;
    int count = 0;
   
     
    while (current != NULL && count < k)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
        count++;
    }
     
    if (next !=  NULL)
       head->next = reverse(next, k);
 
    return prev;
    }