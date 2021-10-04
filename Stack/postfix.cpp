 int evaluatePostfix(string S)
    {
        // Your code here
        stack<int> st;
        int i;
        for(i=0;S[i];i++){
            if(isdigit(S[i]))
               st.push(S[i]-'0');
            else{
                int val1=st.top();
                st.pop();
                int val2=st.top();
                st.pop();
                
                switch (S[i]) 
               { 
                case '+': st.push(val2 + val1); break; 
                case '-': st.push(val2 - val1); break; 
                case '*': st.push(val2 * val1); break; 
                case '/': st.push(val2/val1); break; 
                } 
            }   
        }
        return st.top();
    }