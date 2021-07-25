class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n=mat[0].size();
        if(mat==target)
            return true;
        for(int k=0;k<3;k++)
        {
            vector<vector<int>>output;
            for(int i=0;i<n;i++)
            {
                vector<int>a;
                for(int j=n-1;j>=0;j--)
                {
                    a.push_back(mat[j][i]);
                }            
                output.push_back(a);
                
            }
            mat=output;
            if(output==target)
                return true;
        }
        return false;
        
    }
};