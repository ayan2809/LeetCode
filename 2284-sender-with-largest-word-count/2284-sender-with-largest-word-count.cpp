class Solution {
public:
    string largestWordCount(vector<string>& messages, vector<string>& senders) {
        map<string, int> umap;
        for(int i=0;i<messages.size();i++)
        {
            for(int j=0;j<messages[i].size();j++)
            {
                if(messages[i][j]==' ')
                    umap[senders[i]]+=1;
            }
            umap[senders[i]]+=1;
            // umap[senders[i]]
        }
        string ans="";int maxi=-1;
        for(auto it: umap)
        {
            if(it.second>=maxi)
            {
                ans=it.first;
                maxi=it.second;
            }
        }
        return ans;
    }
};