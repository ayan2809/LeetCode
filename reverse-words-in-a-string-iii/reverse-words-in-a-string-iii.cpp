class Solution {
public:
    string reverser(string word)
    {
        reverse(word.begin(), word.end());
        return word;
    }
    string reverseWords(string s) 
    {
        string word="",ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' ')
            {
                ans+=reverser(word)+" ";
                word="";
                continue;
            }
            word+=s[i];
        }
        ans+=reverser(word);
        
        return ans;
    }
};