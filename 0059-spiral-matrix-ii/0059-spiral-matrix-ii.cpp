class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        
        int m=n;
        int matrix[n][n];
        memset(matrix, 0, sizeof(matrix[0][0]) * (n) * (n));
        //vector<vector<int>> ans(n);
        int rs=0, re=m-1, cs=0, c=0, ce=n-1,j=1;
        while(rs<=re && cs<=ce)
        {
            for(int col=cs;col<= ce; col++)
            {
                matrix[rs][col]=j++;
            }
            if(++rs >re )
                break;
            for(int row= rs;row<=re;row++)
            {
                matrix[row][ce]=j++;
            }
            if(--ce < cs)
            {
                break;
            }
            for(int col=ce;col>=cs; col--)
            {
                matrix[re][col]=j++;
            }
            if(--re <rs )
                break;
            for(int row= re;row>=rs;row--)
            {
                matrix[row][cs]=j++;
            }
            if(++cs > ce)
            {
                break;
            }
            
        }
        vector<vector<int>> out;
            
        for(int i=0;i<n;i++)
        {
            vector<int> x;
            for(int j=0;j<n;j++)
            {
                x.push_back(matrix[i][j]);
            }
            out.push_back(x);
        }
        return out;
    }
};