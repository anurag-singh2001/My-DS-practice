void verticalSumUtil(Node *node, int hd, map<int, int> &Map){
      
      if(node==NULL)
        return;
    
       verticalSumUtil(node->left, hd-1, Map);
       
       Map[hd] += node->data;
       
       verticalSumUtil(node->right, hd+1, Map);
  }
  
  
    vector <int> verticalSum(Node *root) {
        // add code here.
        
        vector<int>v;
        map < int, int> Map;
        map < int, int> :: iterator it;
        
        verticalSumUtil(root, 0, Map);
        
        for(it = Map.begin(); it != Map.end(); ++it){
            v.push_back(it->second);
        }
        
        return v;
    }