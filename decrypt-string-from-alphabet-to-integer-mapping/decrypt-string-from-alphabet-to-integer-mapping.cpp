class Solution {
public:
    string freqAlphabets(string s) {
        string ans="";
        for(int i=s.length()-1;i>=0;i--)
        {
            if(s[i]=='#')
            {
                string x=s.substr(i-2,i+1);
                x=(stoi(x)+96);
                ans=x+ans;
                i-=2;
            }
            else
            {
                char c=96+(s[i]-48);
                ans=c+ans;
            }
        }
        return ans;
    }
};