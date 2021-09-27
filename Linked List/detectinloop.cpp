bool detectLoop(Node* head)
    {
        // your code here
        Node *p=head;
        Node *q=head;
        
        while(p && q && q->next){
            p=p->next;
            q=q->next->next;
            if(p==q){
                return true;
            }
        }
        return false;
    }