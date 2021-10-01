int intersectPoint(Node* head1, Node* head2)
{
    // Your Code Here
    struct Node *ptr1=head1;
    struct Node *ptr2=head2;
    
    if(ptr1==NULL || ptr2==NULL)
      return NULL;
    while(ptr1!=ptr2){
        ptr1=ptr1->next;
        ptr2=ptr2->next;
        if(ptr1==ptr2)
          return ptr1->data;
        if(ptr1==NULL)
          ptr1=head2;
        if(ptr2==NULL)
          ptr2=head1;
          
    }
    return ptr1->data;
}