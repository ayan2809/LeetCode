class Solution {
public:
    int sumOfUnique(vector<int>& nums) {
        map<int, int> umap;
        for(auto it: nums)
            umap[it]+=1;
        
        int sum=0;
        for(auto it: umap)
        {
            if(it.second==1)
                sum+=it.first;
        }
        return sum;
    }
};