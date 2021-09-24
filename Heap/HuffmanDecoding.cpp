string decode_file(struct MinHeapNode* root, string s)
{
//add code here.
string ans="";
struct MinHeapNode* curr=root;

for(int i=0;i<s.size();i++){
    if(s[i]=='0')
        curr=curr->left;
    else
        curr=curr->right;
    
    if(curr->left==NULL && curr->right==NULL){
        ans+=curr->data;
        curr=root;
    }    
}
return ans+"\0";

}