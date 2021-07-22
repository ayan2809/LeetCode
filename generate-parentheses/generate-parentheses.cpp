class Solution {
public:
    vector <string> out;
    void solve(int open, int close, string output)
    {
        if(open==0 && close==0)
        {
            out.push_back(output);
            return;
        }
        if(open!=0)
        {
            string op1=output;
            op1.push_back('(');
            solve(open-1,close,op1);
        }
        if(close > open)
        {
            string op2=output;
            op2.push_back(')');
            solve(open,close-1,op2);
        }
    }
    vector<string> generateParenthesis(int n) {
        solve(n,n,"");
        return out;
    }
};