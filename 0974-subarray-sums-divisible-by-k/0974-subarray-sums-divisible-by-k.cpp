class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int sum=0, ans=0;
        vector<int> count(k,0);
        count[0]=1;
        for(int i=0;i<nums.size();i++)
        {
            // sum+=nums[i];
            sum = (sum + nums[i]%k + k)%k;
            ans+=count[sum];
            count[sum]+=1;
        }
        // for(auto it: count)
        // cout<<it<<endl;
        return ans;
    }
};