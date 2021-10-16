class Solution {
public:
    bool checkRecord(string s) {
        int a=0,l=0;
        for(auto it: s)
        {
            if(it=='A')
                a++;
        }
        if(a>=2)
            return false;
        if(s.length()>=3)
        for(int i=0;i<s.length()-2;i++)
        {
            //cout<<"hello"<<endl;
            if(s[i]=='L' && s[i+1]=='L' &&s[i+2]=='L')
            {
                return false;
            }
        }
        return true;
    }
};