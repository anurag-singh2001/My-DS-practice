int areMirror(Node* a, Node* b) {
    // Your code here
    
    if(a==NULL && b==NULL)
        return 1;
    if(a==NULL || b==NULL)
        return 0;
    
    if(a->data == b->data && areMirror(a->left, b->right) && areMirror(a->right, b->left))
    return 1;     
    }