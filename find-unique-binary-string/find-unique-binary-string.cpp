class Solution {
public:
    
        string findDifferentBinaryString(vector<string>& nums) 
        {
        
        int n=nums.size();
        int j=0;
        string ans="";
        for(int i=0;i<n;i++)
        {
            if(nums[i][j]=='0')
                ans+="1";
            else
                ans+="0";
            j++;
        }
        return ans;
        
    }
};