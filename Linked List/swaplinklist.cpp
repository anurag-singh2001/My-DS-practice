Node* pairWiseSwap(struct Node* head) 
    {
        // The task is to complete this method
        if(head==NULL || head->next==NULL){
            return head;
        }
        Node *p=head;
        Node *c=head->next;
        head=c;
        
        while(true){
            Node* next=c->next;
            c->next=p;
            if(next==NULL || next->next==NULL){
                p->next=next;
                break;
            }
            p->next=next->next;
            p=next;
            c=p->next;
        }
        return head;
    }