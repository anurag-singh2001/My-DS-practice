void SortedStack :: sort()
{
   //Your code here
   
   stack<int> stemp;
   while(!s.empty()){
       int temp = s.top();
       s.pop();
       while(!stemp.empty() && stemp.top()<temp){
           s.push(stemp.top());
           stemp.pop();
       }
       stemp.push(temp);
   }
   while(! stemp.empty()){
       int temp = stemp.top();
       stemp.pop();
       s.push(temp);
   }
}