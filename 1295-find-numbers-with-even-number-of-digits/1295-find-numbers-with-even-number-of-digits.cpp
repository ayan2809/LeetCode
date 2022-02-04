class Solution {
public:
    int solve(int ans)
    {
        int count=0;
        while(ans!=0)
        {
            count++;
            ans=ans/10;
        }
        return count;
    }
    int findNumbers(vector<int>& nums) {
        int ans=0;
        for(auto it: nums)
        {
            if(solve(it)%2==0)
                ans++;
        }
        return ans;
    }
    
};