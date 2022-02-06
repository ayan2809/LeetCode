class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<=2)
            return nums.size();
        int ans=1;
        int j=0;
        int count=1;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[j]!=nums[i])
            {
                j=i;
                count=1;
                ans++;
                // i++;
            }
            else if(nums[j]==nums[i])
            {
                count++;
                if(count<=2)
                {
                    ans++;
                }
                else
                {
                    nums.erase(nums.begin()+i);
                    i-=1;
                }
            }
        }
        return ans;
        
    }
};