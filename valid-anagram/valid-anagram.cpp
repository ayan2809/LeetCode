class Solution {
public:
    bool isAnagram(string s, string t) {
        map <int, int> umap;
        map <int, int> umap2;
        int a=0;
        int len=max(s.length(),t.length());
        if(len==s.length())
            a=1;
        else
            a=2;
        cout<<a<<endl;
        for(int i=0;i<len;i++)
        {
            if(a==1 && i>=t.length())
            {
                int ch=(int)s[i];
                umap[ch]+=1;
                continue;
            }
            if(a==2 && i>=s.length())
            {
                int ch2=(int)t[i];
                umap2[ch2]+=1;
                continue;
            }
            int ch=(int)s[i];
            int ch2=(int)t[i];
            umap[ch]+=1;
            umap2[ch2]+=1;
        }
        int f=0;
        for (auto it: umap)
        {
            //cout<<it.first<<" "<<it.second<<endl;
            if(umap2[it.first]==it.second)
                f++;
        }
        cout<<f<<" "<<len<<endl;
        if(f==max(umap.size(),umap2.size()))
            return true;
        
        return false;
    }
};