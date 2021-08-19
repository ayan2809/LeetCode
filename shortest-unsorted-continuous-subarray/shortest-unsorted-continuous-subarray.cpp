class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> out= nums;
        sort(out.begin(), out.end());
        int count1=0;
        int f=0,ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=out[i])
            {
                if(f==0)
                    count1=i-1;
                ans=i-count1;
                f++;
            }
        }
        return ans;
    }
};