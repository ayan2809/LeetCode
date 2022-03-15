class Solution {
public:
    int mostFrequent(vector<int>& nums, int key) {
        unordered_map<int,int> umap;
        int count=0;
        int ans=nums[0];
        for(int i=0;i<nums.size()-1;i++)
        {
            if(nums[i]==key)
            {
                umap[nums[i+1]]++;
                if(umap[nums[i+1]]>count)
                {
                    count=umap[nums[i+1]];
                    ans=nums[i+1];
                }
            }
            
        }
        return ans;
    }
};