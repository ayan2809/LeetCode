class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int maxi=INT_MIN;
        for(auto it: accounts)
        {
            int sum=0;
            for(auto itr: it)
            {
                sum+=itr;
            }
            maxi=max(maxi, sum);
        }
        return maxi;
    }
};