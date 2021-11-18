class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        map<int,int> umap;
        for(int i=0;i<nums.size();i++)
        {
            umap[nums[i]]+=1;
        }
        int len=nums.size()+1;
        int k=1;
        vector<int> output;
        while(k!=len)
        {
            if(umap[k]==0)
                output.push_back(k);
            k+=1;
        }
        return output;
    }
};