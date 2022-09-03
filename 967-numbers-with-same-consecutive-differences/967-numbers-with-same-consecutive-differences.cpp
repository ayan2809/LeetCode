class Solution {
public:
    void solve(int len, int k, vector<int> &ans, int digit, int num)
    {
        if(len==0)
        {
            ans.push_back(num);
            return;
        }
        for(int i=0;i<=9;i++)
        {
            if(abs(i-digit)==k)
            solve(len-1, k, ans, i, (num*10)+i);
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
       vector<int> ans;
        for(int i=1;i<=9;i++)
        {
            solve(n-1, k, ans, i, i);
        }
        return ans;
    }
};