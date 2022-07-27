vector<vector<int>> separateChaining(int hashSize, int arr[], int sizeOfArray)
{
    // Your code here
    vector<vector<int>> hash(hashSize);
    for (int i = 0; i < sizeOfArray; i++)
    {
        hash[arr[i] % hashSize].push_back(arr[i]);
    }
    return hash;
}