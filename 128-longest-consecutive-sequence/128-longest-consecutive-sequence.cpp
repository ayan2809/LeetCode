class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set <int> umap;
        for(auto it: nums)
        {
            umap.insert(it);
        }
        int answer=0;
        for(int i=0;i<nums.size();i++)
        {
            if(umap.find(nums[i]-1)==umap.end())
            {
                int count=0,j=nums[i];
                while(j<=100000)
        
                {
                    if(umap.find(j)!=umap.end())
                    {
                        count++;
                    }
                    else
                    {
                        break;
                    }
                    j++;
                }
                answer=max(answer, count);
            }
            else
            {
                continue;
            }
        }
        return answer;
    }
};