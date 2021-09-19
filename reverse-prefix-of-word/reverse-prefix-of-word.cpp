class Solution {
public:
    string reversePrefix(string word, char ch) {
        string s="",ans="";
        int f=0,i=0;
        for(i=0;i<word.length();i++)
        {
            if(word[i]==ch)
            {    
                s+=word[i];
                f=1;
                break;
            }
            s+=word[i];
        }
        if(f==1)
        {
            reverse(s.begin(), s.end());
            ans+=s;
            i+=1;
            for(;i<word.length();i++)
                ans+=word[i];
            return ans;
        }
        return word;
        
    }
};