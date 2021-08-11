class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int i=nums.size();
        while(k!=0)
        {
            i--;
            k--;
        }
        return nums[i];
    }
};