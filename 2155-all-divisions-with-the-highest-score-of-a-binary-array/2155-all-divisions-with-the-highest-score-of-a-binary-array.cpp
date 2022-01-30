class Solution {
public:
    vector<int> maxScoreIndices(vector<int>& nums) {
        int ans1=0, ans2=0;
        for(auto it: nums)
        {
            if(it==1)
            {
                ans2++;
            }
        }
        map<int, int> umap;
        umap[0]=ans1+ans2;
        int maxi=ans1+ans2;
        int i=1;
        for(i=1;i<=nums.size();i++)
        {
            if(nums[i-1]==0)
            {
                ans1++;
            }
            else if(nums[i-1]==1)
            {
                ans2--;
            }
            maxi=max(maxi, ans1+ans2);
            umap[i]=ans1+ans2;
                
        }
        
            vector<int> ans;
        for(auto it: umap)
        {
            if(it.second==maxi)
                ans.push_back(it.first);
            // cout<<it.second<<" ";
        }
        
    
        return ans;
    }
};