class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        vector<int> x=score;
        map<int, string>umap;
        // sort(x.begin(), x.end());
        for(auto it: score)
        {
            umap[it]=to_string(it);
        }
        int k=3,f=1,n=score.size();
        auto itr=umap.rbegin();
        while(n!=0)
        {
            if(k==3)
            {
                umap[itr->first]="Gold Medal";
            }
            else if(k==2)
            {
                umap[itr->first]="Silver Medal";
            }
            else if(k==1)
            {
                umap[itr->first]="Bronze Medal";
            }
            else{
                int x= f+3;
                umap[itr->first]=to_string(x);
                f++;
            }
            itr++;
            k--;
            n--;
            
        }
        vector<string> ans;
        for(auto it: score)
        {
            ans.push_back(umap[it]);
        }
        return ans;
    }
};