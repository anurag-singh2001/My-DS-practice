vector <int> zigZagTraversal(Node* root)
    {
    	// Code here
    	
    	vector<int> v;
    	stack<struct Node*> currentlevel;
        stack<struct Node*> nextlevel;
        
        if(!root)
            return v;
        
        currentlevel.push(root);
        
        bool lefttoright=true;
        
        while(!currentlevel.empty()){
            struct Node* temp=currentlevel.top();
            currentlevel.pop();
            
            if(temp){
                v.push_back(temp->data);
                
                if(lefttoright){
                  if (temp->left)
                    nextlevel.push(temp->left);
                  if (temp->right)
                    nextlevel.push(temp->right);
                }
                
                else{
                  if (temp->right)
                    nextlevel.push(temp->right);
                  if (temp->left)
                    nextlevel.push(temp->left);
                }
            }
             if (currentlevel.empty()) {
              lefttoright = !lefttoright;
              swap(currentlevel, nextlevel);
        }
            
            
        }
 
    	
    }