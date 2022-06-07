TNode *sortedListToBST(LNode *head)
{
    // code here
    if (head == NULL)
        return NULL;
    if (head->next == NULL)
        return new TNode(head->data);

    LNode *slow = head;
    LNode *fast = head;
    LNode *prev = head;
    TNode *root = NULL;

    while (fast != NULL and fast->next != NULL)
    {

        fast = fast->next->next;
        prev = slow;
        slow = slow->next;
    }
    prev->next = NULL;
    root = new TNode(slow->data);
    root->left = sortedListToBST(head);
    root->right = sortedListToBST(slow->next);

    return root;
}