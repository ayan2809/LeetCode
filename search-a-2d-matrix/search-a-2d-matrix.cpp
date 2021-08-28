class Solution {
public:
    int search(vector<int>& nums, int target) {
        int s=0;
        int e=nums.size()-1;
        while(s<=e)
        {
            int mid=(s+e)/2;
            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
            {
                e=mid-1;
            }
            else
            {
                s=mid+1;
            }
        }
        return -1;
    }
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        
        for (auto it: matrix)
        {
            int f= search(it, target);
            if(f!=-1)
                return true;
        }
        return false;
        
    }
};