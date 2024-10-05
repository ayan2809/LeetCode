class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int sum=0,ans=0;
        vector<int> prefixSum;
        unordered_map<int, int> umap;
        for(int i=0;i<nums.size();i++)
        {
            sum+=nums[i];
            prefixSum.push_back(sum);
            umap[sum]++;
        }
        for(int i=0;i<prefixSum.size();i++)
        {
            if(prefixSum[i]==k)
            ans++;
            for(int j=i+1;j<prefixSum.size();j++)
            {
                // cout<<prefixSum[j]-prefixSum[i]<<endl;
                if(prefixSum[j]-prefixSum[i]==k)
                ans++;
            }
        }
        return ans;
    }
};