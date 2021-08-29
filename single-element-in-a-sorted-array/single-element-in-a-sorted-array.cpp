class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        if(nums.size()==1)
            return nums[0];
        // int l=0;
        // int r=nums.size();
        // while(l<=r)
        // {
        //     int mid=(l+r)>>1;
        //     if(m)
        //     if(nums[mid]!=nums[mid+1])
        //     {
        //         l=mid+1;
        //     }
        //     else
        //     {
        //         r=mid;
        //     }
        // }
        
        for(int i=0;i<nums.size()-1;i+=2)
        {
            if(nums[i] != nums[i+1])
                return nums[i];
        }
        return nums[nums.size()-1];
    }
};