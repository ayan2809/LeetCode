class Solution {
public:
        void addSolution(vector<vector<string>>&board, vector<vector<string>>&ans ,int n)
    {
       vector<string>temp;
        for(int i=0;i<n;i++)
        {
            string s="";
            for(int j=0;j<n;j++)
            {
                s+=board[i][j];
                // temp.push_back(board[i][j]);
            }
            temp.push_back(s);
        }
        ans.push_back(temp);
    }
     bool isSafe(int row, int col, vector<vector<string>>board , int n)
     {
         int x=row;
         int y=col;
         // check for same row
         while(y>=0)
         {
             if(board[x][y]=="Q")
                 return false;
             y--;
          }
          x=row;
          y=col;
         // check for diagonal
         while(x>=0 and y>=0)
         {
              if(board[x][y]=="Q")
                 return false;
             x--;
             y--;
         }
           x=row;
          y=col;
         // check for diagonal
         while(x<n and y>=0)
         {
              if(board[x][y]=="Q")
                 return false;
             x++;
             y--;
         }                                                                                                                                                      
         return true;
     }
    void solve(int col,vector<vector<string>>&ans,vector<vector<string>>&board , int n)
    {
        // base case
        if(col==n) 
        {
            addSolution(board,ans,n);
            return;
        }
        // solve one case and rest recursion will take care
        for(int row=0;row<n;row++)
        {
            if(isSafe(row,col,board,n))
            {
                board[row][col]="Q";
                solve(col+1,ans,board,n);
                board[row][col]=".";
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
         vector<vector<string>> ans;
         vector<vector<string>>board(n,vector<string>(n,"."));
         // memset(board, 0, 11*11*sizeof(int));
         solve(0,ans,board,n);
          return ans;
    }
};