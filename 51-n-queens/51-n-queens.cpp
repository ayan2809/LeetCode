class Solution {
    int board[11][11];
    vector<vector<string>> ans;
public:
    bool isPossible(int n, int row, int col)
    {
        for(int i=row-1;i>=0;i--)
        {
            if(board[i][col]==1)
            {
                return false;
            }
        }

        for(int i=row-1,j=col-1;i>=0 && j>=0; i--, j--)
        {
            if(board[i][j]==1)
                return false;
        }

        for(int i=row-1,j=col+1;i>=0 && j<n;i--, j++)
        {
            if(board[i][j]==1)
            {
                return false;
            }
        }
        return true;
    }
    void nQueenHelper(int n, int row)
    {
        if(row==n)
        {
            // print the matrix
            // return;
            vector<string> x;
            for(int i=0;i<n;i++)
            {
                string x2="";
                for(int j=0;j<n;j++)
                {
                    if(board[i][j]==1)
                        x2+="Q";
                    else
                        x2+=".";
                    cout<<board[i][j]<<" ";
                }
                x.push_back(x2);
                
            }
            ans.push_back(x);
            cout<<endl;
            return;
        }

        // place at all possible positions
        // and move to smaller problem
        for(int j=0;j<n;j++)
        {
            if(isPossible(n,row,j))
            {
                board[row][j]=1;
                nQueenHelper(n, row+1);
                board[row][j]=0;
            }
        }
        return;
    }
    void placeNQueens(int n)
    {
        memset(board, 0, 11*11*sizeof(int));
        nQueenHelper(n,0);
    }
    vector<vector<string>> solveNQueens(int n) {
        placeNQueens(n);
        return ans;
    }
};