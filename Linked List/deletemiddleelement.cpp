Node* deleteMid(Node* head)
{
    // Your Code Here
    Node *p=head;
    Node *q=head;
    struct Node* copyHead = head;
    int c=0;
    if(head==NULL)
      return NULL;
    if(head->next==NULL){
        delete head;
      return NULL;
    }
      
    while(p!=NULL){
        p=p->next;
        c++;
    }
    int mid=c/2;
    while(mid-- > 1){
        head=head->next;
    }
    head->next=head->next->next;
    return copyHead;
    
}