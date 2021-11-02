class Solution
{
public:
    int maximumDifference(vector<int> &nums)
    {
        int n = nums.size();
        int arr[n];
        arr[n - 1] = INT_MIN;
        for (int i = n - 2; i >= 0; --i)
        {
            arr[i] = max(arr[i + 1], nums[i + 1]);
        }
        int ans = -1;
        for (int i = 0; i < n; ++i)
        {
            if (arr[i] > nums[i])
                ans = max(ans, (arr[i] - nums[i]));
        }
        return ans;
    }
};