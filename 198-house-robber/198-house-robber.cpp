class Solution {
public:
    int rob(vector<int>& nums) {
        int n=nums.size();
        if(n<2)
            return nums[0];
        
        int dp[n];
        dp[0]=nums[0];
        dp[1]=max(dp[0],nums[1]);
        for(int i=2;i<n;i++)
        {
            dp[i]=max(dp[i-1], dp[i-2]+nums[i]);
        }
        return dp[n-1];
    }
};