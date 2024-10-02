class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> x = arr;
        sort(x.begin(), x.end());
        map<int, int> umap;
        int i=1,m=x[0];
        for(auto it: x)
        {
            if(it>m)
            {
                i+=1;
                umap[it]=i;
                m=it;
            }
            else if(it==m)
            {
                umap[it]=i;
            }
        }
        for(auto &it: arr)
        {
            it=umap[it];
        }
        return arr;
    }
};