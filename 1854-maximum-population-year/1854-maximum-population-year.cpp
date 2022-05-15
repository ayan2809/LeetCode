class Solution {
public:
    int maximumPopulation(vector<vector<int>>& logs) {
        vector<int> years(2051,0);
        for(auto it: logs)
        {
            for(int i=it[0];i<it[1];i++)
            {
                years[i]+=1;
            }
        }
        int x=*max_element(years.begin(), years.end());
        auto it= find(years.begin(), years.end(),x);
        // cout<<it-years.begin();
        return it-years.begin();
    }
};