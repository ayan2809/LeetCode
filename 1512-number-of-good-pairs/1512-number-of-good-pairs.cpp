class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int total=0;
        for(int i=0;i<nums.size();i++)
        {
            for(int j=i+1;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    total++;
                }
            }
        }
        return total;
    }
};