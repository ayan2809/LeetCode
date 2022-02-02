class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> ans, a(26,0),b(26,0);
        if(s.size()<p.size())
            return {};
        for(int i=0;i<p.size();i++)
        {   
            a[s[i]-'a']++;
            b[p[i]-'a']++;
        }
        // for(auto it: a)
        //     cout<<it<<" ";
        // cout<<endl;
        // for(auto it: b)
        //     cout<<it<<" ";
        
        if(a==b)
            ans.push_back(0);
        int i=p.size();
        while(i<s.size())
        {
            a[s[i]-'a']++;
            a[s[i-p.size()]-'a']--;
            if(a==b)
                ans.push_back(i-p.size()+1);
            i++;
        }
        return ans;
    }
};