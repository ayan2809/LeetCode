class Solution {
public:
    int hardestWorker(int n, vector<vector<int>>& logs) {
        map<int, int>umap;
        for(int i=0;i<logs.size();i++)
        {
            if(i!=0)
            {
                umap[logs[i][0]]=max(umap[logs[i][0]],logs[i][1]-logs[i-1][1]);
            }
            else
            {
                umap[logs[i][0]]=max(umap[logs[i][0]],logs[i][1]-0);
            }
        }
        int maxi=-1,ans=0;
        for(auto it: umap)
        {
            if(it.second>maxi)
            {
                ans=it.first;
                maxi=it.second;
            }
        }
            // cout<<it.first<<" "<<it.second<<endl;
        return ans;
    }
};