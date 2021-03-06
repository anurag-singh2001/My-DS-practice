void AllSubsets(vector<int> arr, int n, int index, vector<vector<int>> &result, vector<int> &subset)
{
    result.push_back(subset);
    for (int i = index; i < n; i++)
    {
        subset.push_back(arr[i]);
        AllSubsets(arr, n, i + 1, result, subset);
        subset.pop_back();
        while (i < n - 1 and arr[i + 1] == arr[i])
            i++;
    }
}
// Function to find all possible unique subsets.
vector<vector<int>> AllSubsets(vector<int> arr, int n)
{
    // code here
    vector<vector<int>> result;
    vector<int> subset;
    sort(arr.begin(), arr.end());
    AllSubsets(arr, n, 0, result, subset);
    return result;
}