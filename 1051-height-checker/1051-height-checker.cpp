class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans=heights;
        int count=0;
        sort(ans.begin(), ans.end());
        for(int i=0;i<heights.size();i++)
        {
            if(heights[i]!=ans[i])
                count++;
        }
        return count;
    }
};