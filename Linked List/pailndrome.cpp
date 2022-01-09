struct Node* reverse(struct Node *head)
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
        return p;
    }
    
    struct Node* middle(struct Node *head){
        
        struct Node* slow=head;
        struct Node* fast=head;
        
        while(fast!=NULL && fast->next!=NULL){
            slow=slow->next;
            fast=fast->next->next;
        }
        
        return slow;
    }
    
    bool isPalindrome(Node *head)
    {
        //Your code here
        if(head==NULL)
            return true;
        
        struct Node* mid=middle(head);
        struct Node* last=reverse(mid);
        
        struct Node* c=head;
        
        while(last!=NULL){
            if(last->data!=c->data)
                return false;
            last=last->next;
            c=c->next;
            
        }
        return true;
    }