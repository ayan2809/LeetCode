class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        map <int, int> umap;
        for(auto it: arr)
        {
            umap[it]+=1;    
        }
        for(auto it: arr)
        {
            cout<<umap[it]<<" ";
            if(it==0)
            {
                if(umap[it]>1)
                    return true;
                continue;
            }
            long long check=it*2;
            if(umap.find(check)!=umap.end())
            {
                return true;
            }
               
        }
        return false;
    }
};