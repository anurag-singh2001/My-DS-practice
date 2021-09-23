struct Node* reverseList(struct Node *head)
    {
        struct Node* p= NULL;
        struct Node* c= head;
        struct Node* q= NULL;
        
        while(c!=NULL){
           q=c->next;
           c->next=p;
           p=c;
           c=q;
        }
        head = p;
    }