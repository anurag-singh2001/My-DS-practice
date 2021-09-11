 int isSumProperty(Node *root)
    {
     // Add your code here
     int left_data = 0, right_data = 0;
     
     if(root == NULL ||
        (root->left == NULL &&
         root->right == NULL))
        return 1;
        
    else{
        if(root->left != NULL)
        left_data = root->left->data;
        
         if(root->right != NULL)
        right_data = root->right->data;
        
        if((root->data == left_data + right_data)&&
            isSumProperty(root->left) &&
            isSumProperty(root->right))
        return 1;
        else
        return 0;
      }    
    }
