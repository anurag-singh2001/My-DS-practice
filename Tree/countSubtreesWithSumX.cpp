int ans=0;
int solve(Node *root, int x){
    if(root==NULL)
        return 0;
    int left=solve(root->left,x);
    int right=solve(root->right,x);
    
    if(root->data+left+right==x)
        ans++;
    return root->data+left+right;    
}

int countSubtreesWithSumX(Node* root, int X)
{
	// Code here
	ans=0;
	solve(root,X);
	return ans;
}