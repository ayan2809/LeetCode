class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int>ans;
        
        int n=nums.size();
        for(int i=1; i<n; )
        {
            if(nums[i]>nums[i-1])
            swap(nums[i],nums[i-1]);
            
            if(i+1<n && nums[i]>nums[i+1])
            swap(nums[i],nums[i+1]);
            
            i=i+2;
        }
        
        return nums;
    }
};