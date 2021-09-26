void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    Node *p=head;
    Node *q=head;
    
    if(head==NULL)
      return;
    
    while(p->next->next!=head && p->next!=head){
        p=p->next->next;
        q=q->next;
    }  
    if(p->next->next==head){
        p=p->next;
    }
    *head1_ref=head;
    
    if(head->next!=head){
        *head2_ref=q->next;
    }
    p->next=q->next;
    q->next=head;
    
}