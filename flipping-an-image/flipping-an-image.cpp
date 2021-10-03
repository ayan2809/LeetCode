class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>> out;
        for(auto it: image)
        {
            vector<int> x=it;
            for(int i=0;i<x.size();i++)
            {
                x[i]^=1;
            }
            reverse(x.begin(), x.end());
            out.push_back(x);
        }
        return out;
    }
};