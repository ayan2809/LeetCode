class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int right=0;
        for(auto it: nums)
        {
            right +=it;
        }
        int left =0;
        vector<int> ans;
        for(int i=0;i<nums.size();i++)
        {
            right-=nums[i];
            ans.push_back(abs(left-right));
            left+=nums[i];
        }
        return ans;
    }
};