bool hasPathSum(Node *root, int S) {
    // Your code here
    bool ans=0;
    
    int sum=S-root->data;
    
    if(sum==0 && root->left==NULL && root->right==NULL)
        return 1;
    
    if(root->left)
        ans=ans || hasPathSum(root->left,sum);
    
    if(root->right)
        ans=ans || hasPathSum(root->right,sum);
    
    return ans;    
        
}