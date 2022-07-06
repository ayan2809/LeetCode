class Solution {
public:
    string decodeMessage(string key, string message) {
        vector<char> a(26,'a');
        // cout<<a[0]<<endl;
        int f=0;
        map<char, int> umap;
        // for(auto it: a)
        //     cout<<it;
        for(int i=0;i<key.size();i++)
        {
            if(f>=26)
                break;
            if(key[i]!=' ' && !umap[key[i]]>=1){
                
                umap[key[i]]++;
                // cout<<key[i];
                a[f]=key[i];
                f++;
            }
            // cout<<f<<endl;
        }
        for(auto it: a)
            cout<<it;
        string ans="";
        for(auto it: message)
        {
            // cout<<it-97<<endl;
            if(it!=' ')
            {
                auto itr=find (a.begin(), a.end(), it);
                ans+='a'+(itr-a.begin());
            }
            else
                ans+=' ';
        }
        return ans;
        
    }
};