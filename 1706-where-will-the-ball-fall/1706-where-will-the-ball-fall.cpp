class Solution {
public:
    vector<int> findBall(vector<vector<int>>& grid) {
       
        int row=grid.size(),col=grid[0].size();
         vector<int> ans(col);
        for(int j=0;j<col;j++){
            int curr_col = j;
            int next_col=-1;
            for(int i=0;i<row;i++){
                next_col = curr_col+grid[i][curr_col];
                if(next_col<0 || next_col>=col || grid[i][curr_col]!= grid[i][next_col]) {
                    curr_col=-1;
                    break;
                }
                curr_col = next_col;
            }
           ans[j]=curr_col;
            
        }
        
        return ans;
    }
};