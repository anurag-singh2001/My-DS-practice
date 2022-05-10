void preorder(vector<int> &nums, vector<int> v, int l, int r)
{
    if (l > r)
        return;
    if (l == r)
    {
        v.push_back(nums[l]);
        return;
    }
    int mid = (r + l) / 2;
    v.push_back(nums[mid]);
    preorder(nums, v, l, mid - 1);
    preorder(nums, v, mid + 1, r);
    return;
}

public:
vector<int> sortedArrayToBST(vector<int> &nums)
{
    // Code here
    vector<int> v;
    int l = 0, r = nums.size() - 1;
    preorder(nums, v, l, r);
    return v;
}
