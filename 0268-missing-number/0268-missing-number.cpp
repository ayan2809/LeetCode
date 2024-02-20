class Solution {
public:
    int missingNumber(vector<int>& nums) {
        map<int,int> umap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]+=1;
        }
        int len=nums.size();
        int k=0;
        while(k!=len)
        {
            if(umap[k]==0)
                return k;
            k+=1;
        }
        
        return k;
    }
};