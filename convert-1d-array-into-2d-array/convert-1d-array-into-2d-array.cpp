class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        vector<vector<int>> ans;
        if(n*m!=original.size())
        {
            return ans;
        }
        
        int c=0;
        for(int i=0;i<m;i++)
        {
            
            vector<int> x;
            for(int j=0;j<n;j++)
            {
                x.push_back(original[c++]);
            }
            ans.push_back(x);
        }   
            
        return ans;
    }
};