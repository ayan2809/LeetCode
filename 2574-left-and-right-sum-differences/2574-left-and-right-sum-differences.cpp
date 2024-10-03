class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        
        vector<int> left=nums;
        vector<int> right=nums;
        int n=nums.size();
        vector<int> ans(n,0);
        for(int i=1;i<n;i++)
        {
            left[i]+=left[i-1];
            right[n-i-1]+=right[n-i];
        }
        for(int i=0;i<n;i++)
        {
            ans[i]=abs(left[i]-right[i]);
        }
        return ans;
    }
};