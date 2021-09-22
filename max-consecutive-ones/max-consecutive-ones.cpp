class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int j=-1,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            {
                j=i;
            }
            ans=max(ans, (i-j));
                
        }
        return ans;
    }
};