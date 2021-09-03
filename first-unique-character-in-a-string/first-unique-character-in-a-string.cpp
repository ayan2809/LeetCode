class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char, vector<int>> umap;
        int g=INT_MAX;
        for(int i=0;i<s.length();i++)
        {
            if(umap.find(s[i])==umap.end())
            {
                vector<int> b={1,i};
                umap[s[i]]=b;
                continue;
            }
            vector<int> a = umap[s[i]];
            a[0]+=1;
            a[1]=i;
            umap[s[i]]=a;
                //g=min(g,i);
            
        }
        for(auto it: s)
        {
           // cout<<it.first<<" ";
             if(umap[it][0]==1)
                 return umap[it][1];
        }
        ///cout<<endl;
       
        return -1;
        
    }
};