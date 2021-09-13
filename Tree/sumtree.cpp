int sum(Node* node){
        if(node==NULL)
            return 0;
        return sum(node->left)+node->data+sum(node->right);    
    }
    
    bool isSumTree(Node* root)
    {
         // Your code here
         
         int l,r;
         
         if(root==NULL || (root->left==NULL && root->right==NULL))
            return 1;
        
        l=sum(root->right);
        r=sum(root->left);
        
        if(root->data==l+r && isSumTree(root->right) && isSumTree(root->left))
            return 1;
        
        return 0;    
         
         
    }