 int count(struct node* head, int search_for)
    {
    //add your code here
    int c=0;
    struct node *p;
    p=head;
    while(p!=NULL){
        if(p->data==search_for)
        c++;
        p=p->next;
      }
      return c;
    }