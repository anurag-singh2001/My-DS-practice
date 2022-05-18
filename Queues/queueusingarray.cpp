//Function to push an element x in a queue.
void MyQueue ::push(int x)
{
    // Your Code
    arr[front] = x;
    front++;
}

// Function to pop an element from queue and return that element.
int MyQueue ::pop()
{
    // Your Code
    if (rear == front)
        return -1;
    int d = arr[rear];
    rear++;
    return d;
}