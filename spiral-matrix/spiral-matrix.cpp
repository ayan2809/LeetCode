class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m=matrix.size(), n=m?matrix[0].size():0;
        int rs=0, re=m-1, cs=0, c=0, ce=n-1;
        vector<int> ans(n * m);
        while(rs<=re && cs<=ce )
        {
            for(int col=cs;col<= ce; col++)
            {
                ans[c++]=matrix[rs][col];
            }
            if(++rs >re )
                break;
            for(int row= rs;row<=re;row++)
            {
                ans[c++]=matrix[row][ce];
            }
            if(--ce < cs)
            {
                break;
            }
            for(int col=ce;col>=cs; col--)
            {
                ans[c++]=matrix[re][col];
            }
            if(--re <rs )
                break;
            for(int row= re;row>=rs;row--)
            {
                ans[c++]=matrix[row][cs];
            }
            if(++cs > ce)
            {
                break;
            }
        }
        return ans;
    }
};