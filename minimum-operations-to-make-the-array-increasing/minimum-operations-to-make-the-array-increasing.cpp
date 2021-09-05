class Solution {
public:
    int minOperations(vector<int>& nums) {
        int ans=0,x=nums[0],k=0;
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]<=x)
            {
                k=x+1-nums[i];
                ans+=k;
                //cout<<nums[i]+k<<endl;
                nums[i]=nums[i]+k;
            
            }
            
            x=nums[i];
            
        }
        //cout<<endl;
        return ans;
    }
};