class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n=matrix.size();
        int m=matrix[0].size();
        for(int i=0;i<n;i++)
        {
            if(matrix[i][0]==target)
                return true;
            else if(matrix[i][m-1]==target)
                return true;
            
            else if(matrix[i][0]<target && matrix[i][m-1]>target)
            {
                for(int j=0;j<m;j++)
                {
                    if(matrix[i][j]==target)
                        return true;
                }
                break;
            }
        }
        return false;
    }
};