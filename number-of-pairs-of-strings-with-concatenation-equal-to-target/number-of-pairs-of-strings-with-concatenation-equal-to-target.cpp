class Solution {
public:
   
    int numOfPairs(vector<string>& nums, string target) {
        
        int count=0;
       
        for(int i=0;i<nums.size();i++)
        {
            for(int j=0;j<nums.size();j++)
            {
                if(j==i)
                    continue;
                string x=nums[i]+nums[j];
                if(x==target)
                    count++;
            }
        }
        return count;
    }
};