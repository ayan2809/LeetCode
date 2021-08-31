class Solution {
public:
    int findMin(vector<int>& nums) {
        int l=0;
        int e=nums.size()-1;
        while(l<e)
        {
            if(nums[l]<nums[e])
                return nums[l];
            int mid=(l+e)>>1;
            if(nums[l]==nums[mid] && nums[e]==nums[mid])
            {
                ++l;
                --e;
                continue;
            }
            if(nums[mid]>=nums[l])
            {
                l=mid+1;
            }
            else
            {
                e=mid;
            }
        }
        return nums[l];
    }
};