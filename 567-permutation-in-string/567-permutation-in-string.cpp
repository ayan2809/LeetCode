class Solution {
public:
    vector<string> findSubstrings(string s, int k)
    {
        vector<string> ans;
        for(int i=0;i<s.length();i++)
        {
            ans.push_back(s.substr(i,k));
        }
        return ans;
    }
    bool checkInclusion(string s1, string s2) {
        // vector<vector<int>> output;
        // sort(s2.begin(), s2.end());
        vector<int> a1(26,0), a2(26,0);
        for(auto it: s1)
        {
            a1[it-'a']++;
        }
        vector<string> substrings= findSubstrings(s2, s1.length());
        for(auto it: substrings)
        {
            vector<int> a2(26,0);
            for(auto itr: it)
            {
                a2[itr-'a']++;
            }
            if(a1==a2)
                return true;
        }
        return false;
    }
};