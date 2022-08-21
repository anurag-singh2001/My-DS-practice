bool solve(int index, int arr[], int N, int target, vector<vector<int>> &dp)
{

    if (index >= N)
        return 0;
    if (target < 0)
        return 0;
    if (target == 0)
        return 1;

    if (dp[index][target] != -1)
        return dp[index][target];

    bool inc = solve(index + 1, arr, N, target - arr[index], dp);
    bool excl = solve(index + 1, arr, N, target, dp);

    return dp[index][target] = inc or excl;
}

int equalPartition(int N, int arr[])
{
    // code here
    int total = 0;
    for (int i = 0; i < N; i++)
        total += arr[i];

    if (total & 1)
        return 0;

    int target = total / 2;

    vector<vector<int>> dp(N, vector<int>(target + 1, -1));
    return solve(0, arr, N, target, dp);
}