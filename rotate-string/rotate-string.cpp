class Solution {
public:
    bool rotateString(string s, string goal) {
        string check="";
        for(int i=0;i<s.length();i++)
        {
            check=s.substr(i)+s.substr(0, i);
            //cout<<check<<endl;
            if(check==goal)
                return true;
        }
        return false;
    }
};