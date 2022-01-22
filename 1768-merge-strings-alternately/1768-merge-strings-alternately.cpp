class Solution {
public:
    string mergeAlternately(string word1, string word2) {
       int n1=word1.length();
       int n2= word2.length();
        int i=0,j=0,k=0;
        string ans="";
        while(i<n1 && j<n2)
        {
            if(word1[i]==word2[j] && word1[i]==' ')
            {
                continue;
            }
            if(k%2==0)
            {
                ans.push_back(word1[i++]);
                k++;
            }
            else {
                ans.push_back(word2[j++]);
                k++;
            }
        }
        while(i<n1)
        {
            ans.push_back(word1[i++]);
        }
        while(j<n2)
        {
            ans.push_back(word2[j++]);
        }
        return ans;
    }
};