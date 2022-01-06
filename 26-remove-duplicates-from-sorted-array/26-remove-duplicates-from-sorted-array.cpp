class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int temp=nums.size(), check=-1000,j=0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]!=check)
                {
                check=nums[i];
                nums[j++]=check;
            }
            else
            {
                temp--;
            }
        }
        return temp;
    }
};