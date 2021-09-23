class Solution {
public:
    int bitcount(int n)
    {
        int count = 0;
        while (n > 0)
        {    
            count = count + 1;
            n = n & (n-1);
        }
        return count;
    }
    
    vector<int> sortByBits(vector<int>& arr) {
        map<int, vector<int>> umap;
        for(auto it: arr)
        {
            umap[bitcount(it)].push_back(it);
        }
        vector<int> ans;
        for(auto it: umap)
        {
            sort(it.second.begin(), it.second.end());
            for (auto itr: it.second)
            {
                ans.push_back(itr);
            }
        }
        return ans;
    }
};