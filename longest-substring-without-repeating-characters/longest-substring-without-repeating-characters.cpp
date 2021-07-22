class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.length()==0 || s.length()==1)
            return s.length();
        map<char,int> umap;
        int maxi=0,j=0;
        cout<<s.length()<<endl;
        for(int i=0;i<s.length();i++)
        {
            if(umap[s[i]]==0)
            {
                umap[s[i]]=i+1;
                
            }
            else
            {
                j=max(umap[s[i]],j);
                umap[s[i]]=i+1;
            }
            maxi=max(maxi,(i-j));
            //cout<<j<<" ";
        }
        cout<<endl;
        return maxi+1;
    }
};