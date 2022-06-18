class Solution {
public:
    bool checkPal(string s, int start, int end)
    {
        while(start<=end)
        {
            if(s[start++]!=s[end--])
            {
                return false;
            }
        }
        return true;
    }
    void solve(string s, vector<vector<string>> & ans, vector<string> &path, int ind)
    {
        if(ind==s.size())
        {
            ans.push_back(path);
            return;
        }
        for(int i=ind;i<s.size();++i)
        {
            if(checkPal(s, ind, i))
            {
                path.push_back(s.substr(ind, i-ind+1));
                solve(s, ans, path, i+1);
                path.pop_back();
                
            }
        }
        
    }
    vector<vector<string>> partition(string s) {
        vector<vector<string>> ans;
        vector<string> path;
        solve(s, ans, path, 0);
        return ans;
    }
        
};