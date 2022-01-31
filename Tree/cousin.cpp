vector<int> printCousins(Node* root, Node* node_to_find)
    {
        //code here
        queue<Node*>q;
        q.push(root);
        bool flag=true;
        while(!q.empty()&&flag){
            int n=q.size();
            for(int i=0;i<n;i++){
                Node *node=q.front();
                q.pop();
                if(node->left==node_to_find || node->right==node_to_find)
                        flag=false;
                
                else{
                    if(node->left)
                        q.push(node->left);
                    if(node->right)
                        q.push(node->right);
                        
                }        
            }
        }
            vector<int> v;
        if(q.empty())
            v.push_back(-1);
        else{
            while(!q.empty()){
                v.push_back(q.front()->data);
                q.pop();
            }
        }
        return v;
    }