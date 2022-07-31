priority_queue<int> maxheap;
priority_queue<int, vector<int>, greater<int>> minheap;

void insertHeap(int &x)
{
    if (maxheap.empty() || maxheap.top() > x)
        maxheap.push(x);
    else
        minheap.push(x);
    balanceHeaps();
}

// Function to balance heaps.
void balanceHeaps()
{
    if (maxheap.size() > minheap.size() + 1)
    {
        minheap.push(maxheap.top());
        maxheap.pop();
    }
    else if (maxheap.size() + 1 < minheap.size())
    {
        maxheap.push(minheap.top());
        minheap.pop();
    }
}

// Function to return Median.
double getMedian()
{
    if (maxheap.size() == minheap.size())
        return (maxheap.top() + minheap.top()) / 2.0;

    return maxheap.size() > minheap.size() ? maxheap.top() : minheap.top();
}