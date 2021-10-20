class Solution {
public:
    int oddCells(int m, int n, vector<vector<int>>& indices) {
        int res=0;
        vector<vector<int>> v(m,vector<int>(n,0));
        for(int i=0;i<indices.size();i++)
        {
            int r=indices[i][0];
            int c=indices[i][1];
            for(int j=0;j<n;j++)
            {
                v[r][j]++;
            }
            for(int j=0;j<m;j++)
            {
                v[j][c]++;
            }
        }
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(v[i][j]&1)
                {
                    res++;
                }
            }
        }
        return res;
    }
};