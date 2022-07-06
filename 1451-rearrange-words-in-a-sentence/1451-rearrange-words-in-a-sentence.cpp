class Solution {
public:
    string arrangeWords(string text) {
        map<int, vector<string>> umap;
        string x="";
        for(int i=0;i<text.length();i++)
        {
            if(text[i]==' ')
            {
                // umap[x.length()]={};
                umap[x.length()].push_back(x);
                x="";
            }
            else
            {
                x+=text[i];
            }
            
        }
        umap[x.length()].push_back(x);
        string ans="";
        for(auto it: umap)
        {
            for(auto itr:it.second)
            {
                if(ans=="")
                {
                    string f=itr;
                    ans+=itr;
                    if(!(ans[0]>=65 && ans[0]<=90))
                    {
                        // char ch=ans[0];+32<<endl;
                        ans[0]=toupper(ans[0]);
                    }
                    ans+=' ';
                }
                else
                {
                    itr[0]=tolower(itr[0]);
                    ans+=itr;
                    ans+=' ';
                }
            }
            
        }
        ans.pop_back();
        return ans;
    }
};