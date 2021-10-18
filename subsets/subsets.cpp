class Solution {
public:
    void solve(vector<int> input, vector<int> & output, vector<vector<int>> &op)
    {
        if(input.size()==0)
        {
            vector<int> sum;
            for(auto it: output)
                sum.push_back(it);
            op.push_back(sum);
            return;
        }
        vector<int> out1=output;
        vector<int> out2=output;
        
        out2.push_back(input[0]);
        input.erase(input.begin()+0);
        solve(input,out1, op);
        solve(input,out2, op); 
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> output;
        vector<vector<int>> out;
        solve(nums, output, out);
        return out;
    }
};