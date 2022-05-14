class Solution {
public:
    int waysToSplitArray(vector<int>& nums) {
        long long x=0,y=0,n=nums.size();
        long long tot=0;
        for(auto it:nums)
            {
            tot+=it;
        }
        // cout<<endl;
        long long count=0;
        for(int i=0;i<n-1;i++)
        {
            x+=nums[i];
            tot-=nums[i];
            if(x>=tot)
                count++;
            // cout<<x<<" "<<tot<<endl;
            
        }
        return count;
    }
};