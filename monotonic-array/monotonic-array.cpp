class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int a=0, b=0,c=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++)
        {
            if(nums[i]>nums[i+1])
                a++;
            if(nums[i]<nums[i+1])
                b++;
            if(nums[i]==nums[i+1])
                c++;
        }
        if(a+c==n-1 || b+c==n-1)
            return true;
        return false;
    }
};