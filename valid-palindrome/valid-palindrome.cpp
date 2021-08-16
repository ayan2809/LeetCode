class Solution {
public:
    bool isPalindrome(string s) {
        
        string s2="";
        for(auto it: s)
        {
            if(((int)it>=65 && (int)it<=90)  || ( (int)it>=97 && (int)it<= 122 ) || ( (int)it>=48 && (int)it<= 57 )  )
            {
                s2+=tolower(it);
            }
        }
        cout<<s2<<endl;
        if(s2.length()==1)
            return true;
        for(int i=0;i<s2.length()/2;i++)
        {
            //cout<<s[i]<<" "<<s[s.length()-1-i]<<endl;
            if(s2[i]!=s2[s2.length()-1-i])
            {
                return false;
            }
        }
        return true;
    }
};