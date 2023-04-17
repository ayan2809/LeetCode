class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> result;
        int maxi=*max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++)
        {
            if(extraCandies+candies[i]>=maxi)
            {
                result.push_back(true);
            }
            else
            {
                result.push_back(false);
            }
        }
        return result;
    }
};