void MyQueue::push(int x)
{
    // Your Code
    QueueNode *temp = new QueueNode(x);
    if (front == NULL)
    {
        front = temp;
        rear = temp;
    }
    else
    {
        rear->next = temp;
        rear = temp;
    }
}

// Function to pop front element from the queue.
int MyQueue ::pop()
{
    // Your Code
    if (front == NULL)
        return -1;
    if (front->next == NULL)
    {
        int x = front->data;
        front = NULL;
        rear = NULL;
        return x;
    }
    else
    {
        QueueNode *temp = front;
        int x = temp->data;
        front = front->next;
        delete temp;
        return x;
    }
}
