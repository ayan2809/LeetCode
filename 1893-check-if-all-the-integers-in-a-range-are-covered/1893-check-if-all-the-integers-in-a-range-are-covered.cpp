class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        set<int> x;
        for(int i=0;i<ranges.size();i++)
        {
            for(int j=ranges[i][0];j<=ranges[i][1];j++)
            {
                x.insert(j);
            }
        }
        for(int i=left;i<=right;i++)
        {
            if(x.count(i)<1)
            return false;
        }
        return true;
        
    }
};