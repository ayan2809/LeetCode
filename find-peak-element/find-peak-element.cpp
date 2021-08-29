class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int l=0;
        int e=nums.size()-1;
        while(l<e)
        {
            int mid=(l+e)>>1;
            if(nums[mid]<nums[mid+1])
            {
                l=mid+1;
            }
            else
            {
                e=mid;
            }
        }
        return e;
    }
};