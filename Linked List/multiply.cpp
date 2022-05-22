long long multiplyTwoLists(Node *l1, Node *l2)
{
    // Your code here
    long long a = 0;
    long long b = 0;
    long long mod = 1000000007;

    while (l1 != NULL)
    {
        a = a * 10;
        a = a % mod + l1->data;
        l1 = l1->next;
    }
    while (l2 != NULL)
    {
        b = b * 10;
        b = b % mod + l2->data;
        l2 = l2->next;
    }
    long long s = a % mod * b % mod;
    return s;
}