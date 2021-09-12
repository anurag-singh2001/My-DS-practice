int diameter(Node* root) {
        // Your code here
        if(root==NULL)
            return 0;
        
        int lheight=height(root->left);
        int rheight=height(root->right);
        
        int ldiameter = diameter(root->left);
        int rdiameter = diameter(root->right);
        
        return max(lheight+rheight+1,max(ldiameter,rdiameter));
    }
    
    int height(struct Node* node){
        if(node==NULL)
            return 0;
        
        return 1+max(height(node->left),height(node->right));    
            
    }