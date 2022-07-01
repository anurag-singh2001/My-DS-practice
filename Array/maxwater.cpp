int maxWater(int height[], int n)
{
    // Your code here
    int max_water = 0, cur_water = 0, first = 0, last = n - 1;
    while (first + 1 < last)
    {
        cur_water = min(height[first], height[last]) * (last - first - 1);
        max_water = max(max_water, cur_water);

        if (height[first] < height[last])
            first++;
        else
            last--;
    }
    return max_water;
}