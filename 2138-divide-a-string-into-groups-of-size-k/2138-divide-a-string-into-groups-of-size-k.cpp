class Solution {
public:
    vector<string> divideString(string s, int k, char fill) {
        vector<string> ans;
        for(int i=0;i<s.length();i+=k)
        {
            string t=s.substr(i,k);
            if(t.size()==k)
            {
                ans.push_back(t);
                continue;
            }
            
            int len=t.size();
            for(int i=0;i<k-len;i++)
            {
                t+=fill;
            }
            ans.push_back(t);
        }
        return ans;
    }
};