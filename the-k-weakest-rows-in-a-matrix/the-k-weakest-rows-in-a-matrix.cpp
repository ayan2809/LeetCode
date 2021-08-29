class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        map<int, vector<int>> umap;
        vector<int> ans;
        for(int i=0;i<mat.size();i++)
        {
            auto itr= find (mat[i].begin(), mat[i].end(),0);
            //if(itr!=it.end())
             //int k=
            cout<<itr-mat[i].begin()<<" ";
            umap[itr-mat[i].begin()].push_back(i);
        }
        for(auto it: umap)
        {
            if(k==0)
                break;
            for(auto itr: it.second)
            {
                 ans.push_back(itr);
                 k--;
                 if(k==0)
                    break;
            }
            if(k==0)
                break;
           
        }
        return ans;
    }
};