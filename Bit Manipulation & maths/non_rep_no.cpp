vector<int> singleNumber(vector<int> nums)
{
    // Code here.
    vector<int> v;
    int Xor = nums[0];
    int set;
    int x = 0;
    int y = 0;

    for (int i = 1; i < nums.size(); i++)
        Xor ^= nums[i];

    set = Xor & ~(Xor - 1);
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] & set)
            x = x ^ nums[i];
        else
            y = y ^ nums[i];
    }
    v.push_back(min(x, y));
    v.push_back(max(y, x));
    return v;
}