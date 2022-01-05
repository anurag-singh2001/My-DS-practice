int findDuplicate(vector<int> &nums)
{
    unordered_map<int, int> freq;
    int ans;
    for (int i = 0; i < nums.size(); i++)
        freq[nums[i]]++;
    bool d = false;
    unordered_map<int, int>::iterator itr;
    for (itr = freq.begin(); itr != freq.end(); itr++)
    {
        if (itr->second > 1)
        {
            ans = itr->first;
            d = true;
        }
    }
    if (d == false)
        return -1;
    else
        return ans;
}