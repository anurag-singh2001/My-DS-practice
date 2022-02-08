vector<int> postOrder(Node* node) {
        // code here
        vector<int>v;
        if(node==NULL)
            v.push_back(-1);
        
        stack<Node*>s1,s2;
        s1.push(node);
        Node *root;
        while(!s1.empty()){
            root=s1.top();
            s1.pop();
            s2.push(root);
            
            if(root->left)
                s1.push(root->left);
            if(root->right)
                s1.push(root->right);
        }
        while(!s2.empty()){
            root=s2.top();
            s2.pop();
            v.push_back(root->data);
        }
        
        return v;
    }