class Solution {
public:
    bool closeStrings(string word1, string word2) {
        vector<int> a1(26,0),a2(26,0), a3(26,0),a4(26,0);
        for(auto it: word1)
        {
            
            a1[it-'a']++;
            a3[it-'a']=1;
        }
        for(auto it: word2)
        {
            a2[it-'a']++;
            a4[it-'a']=1;
        }
        // sort(a1.begin(), a2.end());
        // sort(a2.begin(), a2.end());
        sort(begin(a1),end(a1));
        sort(begin(a2),end(a2));
        if(a1==a2 && a3==a4)
            return true;
        return false;
    }
};