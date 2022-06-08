node *partition(node *root, node *end)
{
    node *pivot = root, *node = root->next;

    while (node != end)
    {
        if (node->data <= pivot->data)
            swap(node->data, pivot->data);
        node = node->next;
    }
    return pivot;
}

void quick_sort(node *root, node *end)
{
    if (!root || !root->next || root == end)
        return;

    node *mid = partition(root, end);
    quick_sort(root, mid);
    quick_sort(mid->next, end);
}

// you have to complete this function
void quickSort(struct node **headRef)
{

    quick_sort(*headRef, NULL);
}