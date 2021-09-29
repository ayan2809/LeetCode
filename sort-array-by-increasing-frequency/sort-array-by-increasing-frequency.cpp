class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        map<int, int> umap;
        for(auto it: nums)
            umap[it]+=1;
        
        vector<int> ans;
        map<int, vector<int>> umap2;
        for(auto it: umap){
            cout<<it.first<<" "<<it.second<<endl;
            umap2[it.second].push_back(it.first);}
        for(auto it: umap2)
        {
            for(int j=it.second.size()-1;j>=0;j--)
            for(int i=0;i<it.first;i++)
                ans.push_back(it.second[j]);
            
        }
        return ans;
    }
};