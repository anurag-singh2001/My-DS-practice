Node* divide(int N, Node *head){
        // code here
        Node *end=head;
        Node *prev=NULL;
        Node *curr=head;
        
        while(end->next!=NULL)
            end=end->next;
        
        Node *new_end=end;
        
        while(curr->data%2!=0 and curr!=end){
            new_end->next=curr;
            curr=curr->next;
            new_end->next->next=NULL;
            new_end=new_end->next;
            
        }
        if(curr->data%2==0){
            head=curr;
            while(curr!=end){
                if((curr->data)%2==0){
                    prev=curr;
                    curr=curr->next;
                }
                else{
                    prev->next=curr->next;
                    curr->next=NULL;
                    new_end->next = curr;
                    new_end = curr;
                    curr = prev->next;
                }
            }
        }
        else
            prev=curr;
         if (new_end != end && (end->data) % 2 != 0)
    {
        prev->next = end->next;
        end->next = NULL;
        new_end->next = end;
    }
    return head;
    }