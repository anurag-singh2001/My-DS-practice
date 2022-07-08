void del(stack<int> &s, int count, int size)
{

    if (count == size / 2)
    {
        s.pop();
        return;
    }
    int num = s.top();
    s.pop();
    del(s, count + 1, size);
    s.push(num);
}

// Function to delete middle element of a stack.
void deleteMid(stack<int> &s, int sizeOfStack)
{
    // code here..
    int count = 0;
    del(s, count, sizeOfStack);
}