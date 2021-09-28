class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
       map<int, int,greater<int>> umap;
       for(int i=0;i<k;i++)
       {
           umap[nums[i]]+=1;
       }
        vector<int> ans;
        int i=0,j=k,n=nums.size();
        while(j!=n)
        {
            for(auto it: umap)
            {
                ans.push_back(it.first);
                break;
            }
            if(umap[nums[i]]==1)
            {
                umap.erase(nums[i]);
            }
            else
            {
                umap[nums[i]]-=1;
            }
            umap[nums[j]]+=1;
            i++;
            j++;
        }
        for(auto it: umap)
        {
            ans.push_back(it.first);
            break;
        }
        return ans;
        
       
        
    }
};