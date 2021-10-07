void QueueStack :: push(int x)
{
        // Your Code
        while(q1.size()!=0){
            q2.push(q1.front());
            q1.pop();
        }
        q1.push(x);
        
        while(q2.size()!=0){
            q1.push(q2.front());
            q2.pop();
        }
}

//Function to pop an element from stack using two queues. 
int QueueStack :: pop()
{
        // Your Code       
        if(q1.empty() && q2.empty())
            return -1;
        int res = q1.front();
        q1.pop();
        return res;
}
