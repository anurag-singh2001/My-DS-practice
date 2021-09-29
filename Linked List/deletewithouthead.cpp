 void deleteNode(Node *del)
    {
       // Your code here
      if (del == NULL) // If linked list is empty
        return;
    else {
 
        if (del->next == NULL) {
            
            return;
        }
 
        struct Node* temp = del->next;
 
        // Copy data of the next node to current node
        del->data = del->next->data;
 
        // Perform conventional deletion
        del->next = del->next->next;
 
        free(temp);
    }
    }