class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        vector<vector<int>> ans;
        int n=matrix.size();
        int m= matrix[0].size();
        for(int i=0;i<m;i++)
        {
            vector<int> x;
            for(int j=0;j<n;j++)
            {
                x.push_back(matrix[j][i]);
            }
            ans.push_back(x);
            // for(auto it: x)
            //     cout<<it<<" ";
            // cout<<endl;
        }
        // matrix=ans;
        return ans;
    }
};