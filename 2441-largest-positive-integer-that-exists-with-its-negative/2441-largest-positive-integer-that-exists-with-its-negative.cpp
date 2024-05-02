class Solution {
public:
    int findMaxK(vector<int>& nums) {
        map<int, int> umap;
        int ans=-1;
        for(auto it: nums)
        {
            umap[it]+=1;
            int x = -it;
            if(umap[x] != 0 && abs(x)>= abs(ans))
            ans=abs(x);
        }
        return ans;
    }
};