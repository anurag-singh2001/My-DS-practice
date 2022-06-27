bool pairWiseConsecutive(stack<int> s)
{
    // Code here
    int n = s.size();
    if (n % 2 != 0)
        s.pop();
    while (!s.empty())
    {
        int x = s.top();
        s.pop();
        int y = s.top();
        s.pop();
        if (abs(x - y) != 1)
            return false;
    }
    if (s.empty())
        return true;
}