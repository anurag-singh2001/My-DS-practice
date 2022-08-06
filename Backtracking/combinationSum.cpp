void comb(int i, vector<int> &arr, vector<int> &temp, vector<vector<int>> &ans, int sum)
{

    if (sum == 0)
    {
        ans.push_back(temp);
        return;
    }
    if (i == arr.size())
        return;

    if (arr[i] <= sum)
    {
        temp.push_back(arr[i]);
        comb(i, arr, temp, ans, sum - arr[i]);
        temp.pop_back();
    }
    comb(i + 1, arr, temp, ans, sum);
}

// Function to return a list of indexes denoting the required
// combinations whose sum is equal to given number.
vector<vector<int>> combinationSum(vector<int> &A, int B)
{
    // Your code here
    set<int> s(A.begin(), A.end());
    A.clear();
    for (auto &x : s)
        A.push_back(x);
    vector<vector<int>> ans;
    vector<int> temp;
    comb(0, A, temp, ans, B);
    return ans;
}