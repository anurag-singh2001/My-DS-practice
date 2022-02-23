Node *insertionSort(struct Node *head_ref)
{
    // code here
    Node *head = head_ref->next;
    while (head)
    {
        Node *temp = head_ref;
        bool flag = false;
        while (temp != head && temp->data <= head->data)
            temp = temp->next;
        if (temp != head)
        {
            swap(temp->data, head->data);
            flag = true;
        }
        if (!flag)
            head = head->next;
    }
    return head_ref;
}