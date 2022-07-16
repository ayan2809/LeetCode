class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int, int> umap;
        for(auto it: tasks)
        {
            umap[it]+=1;
        }
        int ans=0;
        for(auto &it: umap)
        {
            while(it.second!=0)
            {
               if(it.second==1)
                    return -1;
                else if(it.second%3==0)
                {
                    it.second-=3;
                    ans++;
                }
                else
                {
                    it.second-=2;
                    ans++;
                } 
            }
            
        }
        return ans;
    }
};