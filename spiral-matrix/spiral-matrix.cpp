class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>vec;
        int bottom=matrix.size()-1;
        int right=matrix[0].size()-1;
        int top=0;
        int left=0;
        int i;
        while(top<=bottom && left<=right)
        {
            for(int i=left;i<=right;i++)
            {
                vec.push_back(matrix[top][i]);
            }
            top++;
            if(top>bottom)
                break;
            
            for(int i=top;i<=bottom;i++)
            {
                vec.push_back(matrix[i][right]);
            }
            right--;
            if(left>right)
                break;
            for(int i=right;i>=left;i--)
            {
                vec.push_back(matrix[bottom][i]);
            }
            
            bottom--;
            if(top>bottom)
                break;
            for(int i=bottom;i>=top;i--)
            {
                vec.push_back(matrix[i][left]);
            }
            
            left++;
            if(left>right)
                break;
            
        }
        return vec;
    }
};