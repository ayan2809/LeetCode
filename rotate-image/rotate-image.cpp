class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix[0].size();
        cout<<n<<endl;
        vector<vector<int>>output;
        for(int i=0;i<n;i++)
        {
            vector<int>a;
            for(int j=n-1;j>=0;j--)
            {
                a.push_back(matrix[j][i]);
            }            
            output.push_back(a);
        }
        matrix=output;
    }
};