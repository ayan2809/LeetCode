class Solution {
public:
    string findLongestWord(string s, vector<string>& dictionary) {
        map<int, vector<string>> umap;
        int i=0,j=0,maxi=-1;
        for(auto it: dictionary)
        {
            int i=0,j=0, n=it.length();
            while(j!=s.length())
            {
                if(it[i]==s[j])
                {
                    i++;
                    j++;
                }
                else if(it[i]!=s[j]){
                    j++;
                }
                if(i==n){
                    if(i>=maxi)
                    {
                        maxi=i;
                        umap[maxi].push_back(it);
                    }
                    break;
                }
            }
        }
        vector<string> x= umap[maxi];
        sort(x.begin(), x.end());
        return x[0];
    }
};