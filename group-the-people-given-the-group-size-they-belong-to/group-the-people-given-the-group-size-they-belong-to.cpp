class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        map<int, vector<int>> umap;
        
        for(int i=0;i<groupSizes.size();i++)
        {
            umap[groupSizes[i]].push_back(i);
        }
        vector<vector<int>> out;
        for(auto it: umap)
        {
            vector<int> check=it.second;
            int i=0;
                while(i!=it.second.size())
                {
                    vector<int> ans;
                    for(int k=0;k<it.first;k++)
                    {
                        ans.push_back(check[i]);
                        i++;
                    }
                    out.push_back(ans);
                }
            
        }
        return out;
    }
};