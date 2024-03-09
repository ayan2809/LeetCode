class Solution {
public:
    string sortVowels(string s) {
        vector<char> vowels;
        for(auto it: s)
        {
            if(it=='a'|| it=='e'|| it=='i'|| it=='o'|| it=='u'|| it=='A'|| it=='E'|| it=='I'|| it=='O'|| it=='U')
            vowels.push_back(it);
        }
        sort(vowels.begin(), vowels.end());
        string ans="";
        int i=0;
        for(auto it: s){
            if(it=='a'|| it=='e'|| it=='i'|| it=='o'|| it=='u'|| it=='A'|| it=='E'|| it=='I'|| it=='O'|| it=='U')
            ans+=vowels[i++];
            else
            ans+=it;
        }
        return ans;        
    }
};