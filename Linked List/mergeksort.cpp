struct compare
{
    bool operator()(
        struct Node *a, struct Node *b)
    {
        return a->data > b->data;
    }
};
struct Node *newNode(int data)
{
    // Allocate node
    struct Node *new_node = new Node(data);

    // Put in the data
    new_node->data = data;
    new_node->next = NULL;

    return new_node;
};
Node *mergeKLists(Node *arr[], int K)
{
    // Your code here
    priority_queue<Node *, vector<Node *>, compare> pq;

    for (int i = 0; i < K; i++)
        if (arr[i] != NULL)
            pq.push(arr[i]);
    if (pq.empty())
        return NULL;

    struct Node *dummy = newNode(0);
    struct Node *last = dummy;
    while (!pq.empty())
    {

        struct Node *curr = pq.top();
        pq.pop();

        last->next = curr;
        last = last->next;

        if (curr->next != NULL)

            pq.push(curr->next);
    }

    return dummy->next;
}