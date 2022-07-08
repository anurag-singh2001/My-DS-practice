vector<int> v;
vector<int> Reverse(stack<int> St)
{
    if (St.empty())
        return v;
    v.push_back(St.top());
    St.pop();
    return Reverse(St);
}