vector<int> reverseLevelOrder(Node *root)
{
    // code here
      vector<int>v;
     queue<Node *>q;
     q.push(root);
     while(!q.empty()){
          Node *temp=q.front();

          q.pop();
           if(temp->right)
          {
              q.push(temp->right);
          }
          if(temp->left)
          {
              q.push(temp->left);
          }
          
                     v.push_back(temp->data);
     }
     reverse(v.begin(),v.end());
    return v;
}