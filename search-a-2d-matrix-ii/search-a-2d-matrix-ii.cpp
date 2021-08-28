class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        // int n=matrix.size();
        // int m=matrix[0].size();
        // int l=0, r=m*n-1;
        // while(l!=r)
        // {
        //     int mid= (l+r-1)>>1;
        //     if(matrix[mid/m][mid%m]<target)
        //     {
        //         l=mid+1;
        //     }
        //     else
        //     {
        //         r=mid;
        //     }
        // }
        // return (matrix[r/m][r%m]==target);
        int n=matrix.size();
        
        for(int i=0;i<n;i++)
        {
            int m=matrix[i].size();
            if(matrix[i][0]==target)
                return true;
            if(matrix[i][m-1]==target)
                return true;
            
            if(matrix[i][0]<=target && matrix[i][m-1]>=target)
            {
                // for(int j=0;j<m;j++)
                // {
                //     if(matrix[i][j]==target)
                //         return true;
                // }
                // break;
                
                bool check= binary_search(matrix[i].begin(), matrix[i].end(), target);
                if(check==true)
                    return true;
            }
        }
        return false;
    }
};