class Solution {
public:
    int maxWidthOfVerticalArea(vector<vector<int>>& points) {
        set<int> ans;
        for(auto it: points)
            ans.insert(it[0]);
        int out=0;
        for (auto it = next(begin(ans)); it != end(ans); ++it)
        out = max(out, *it - *prev(it));
        return out;
    }
};