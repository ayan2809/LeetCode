class Solution {
public:
    string reverseWords(string s) {
        vector<string> check;
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                if(ans!="")
                check.push_back(ans);
                ans="";
            }
            if(s[i]!=' ')
            ans+=s[i];
        }
        if(ans!="")
        check.push_back(ans);
        ans="";
        for(int i=check.size()-1;i>=0;i--)
        {
            if(i!=0){
            ans+=check[i]+" ";
            continue;}
            ans+=check[i];
        }
        // for(auto it: check)
        //     cout<<it<<" ";
        // cout<<endl;
        return ans;
        
    }
};