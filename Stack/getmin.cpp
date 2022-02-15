class Solution
{
    stack<int> minEle;
    stack<int> s;

public:
    /*returns min element from stack*/
    int getMin()
    {

        // Write your code here
        if (minEle.empty())
            return -1;
        else
            return minEle.top();
    }

    /*returns poped element from stack*/
    int pop()
    {
        // Write your code here

        if (s.empty())
            return -1;
        else
        {
            int pop = s.top();
            if (s.top() == minEle.top())
                minEle.pop();
            s.pop();
            return pop;
        }
    }

    /*push element x into the stack*/
    void push(int x)
    {

        // Write your code here
        s.push(x);
        if (minEle.empty() || minEle.top() >= x)
            minEle.push(x);
    }
};