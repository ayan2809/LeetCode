class Solution {
public:
    string reverseVowels(string s) {
        string check="";
        for(auto it:s)
        {
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u' || it=='A'||it=='E'||it=='I'||it=='O'||it=='U')
                check+=it;
        }
        check.begin(), check.end();
        int j=check.size()-1;
        string ans="";
        for(auto it: s)
        {
            if(it=='a'||it=='e'||it=='i'||it=='o'||it=='u'|| it=='A'||it=='E'||it=='I'||it=='O'||it=='U')
            {    ans+=check[j--];
                continue;
            }
            ans+=it;
            
        }
        return ans;
    }
};