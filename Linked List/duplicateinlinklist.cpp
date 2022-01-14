Node *removeDuplicates(Node *head)
{
    // your code goes here
    unordered_set<int> hash;
    struct Node *curr = head;
    struct Node *temp = NULL;

    while (curr != NULL)
    {
        if (hash.find(curr->data) != hash.end())
        {
            temp->next = curr->next;
            delete (curr);
        }
        else
        {
            hash.insert(curr->data);
            temp = curr;
        }
        curr = temp->next;
    }
    return head;
}