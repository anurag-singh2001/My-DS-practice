Node * deleteAtPosition(Node *head,int pos)
{
    //Your code here
    if(head==NULL)
        return head;
    if(pos==1)
        return head->next;
    
   Node *curr=head;
   int i=1;
   while(i<pos-1 and curr!=NULL){
       curr=curr->next;
       i++;
   }
   curr->next=curr->next->next;
   return head;
}