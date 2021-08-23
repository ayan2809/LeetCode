class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        map<int, int> umap;
        for(int i=0;i<numbers.size();i++)
        {
            int x=target-numbers[i];
            if(umap.find(x)!=umap.end())
                return {umap[x],i+1};
            umap[numbers[i]]=i+1;
        }
        return {};
    }
};