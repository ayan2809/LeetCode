class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        map<int,int> umap;
        for(auto it: nums)
        {
            umap[it]+=1;
        }
        int ans=0;
        for(int i=0;i<nums.size();i++)
        {
            if(umap.find(nums[i]-1)==umap.end())
            {
                int count=0,j=nums[i];
                while(j<=100000)
                //for(int j=nums[i];i<nums.size();j++)
                {
                    if(umap.find(j)!=umap.end())
                    {
                        count++;//=umap[nums[i]];
                    }
                    else
                    {
                        break;
                    }
                    j++;
                }
                ans=max(ans, count);
            }
            else
            {
                continue;
            }
        }
        return ans;
    }
};