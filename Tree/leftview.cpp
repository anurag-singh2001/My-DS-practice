void left(Node* root,vector<int>&vec,int i,int &res)
{
    if(!root)
    return;
    if(res<i){
        res=i;
        vec.push_back(root->data);
    }
    left(root->left,vec,i+1,res);
    left(root->right,vec,i+1,res);
 
}

vector<int> leftView(Node *root)
{
   // Your code here
   vector<int>vec;
   int res=0;
   left(root,vec,1,res);
   return vec;
}