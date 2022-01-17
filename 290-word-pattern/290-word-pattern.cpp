class Solution {
public:
    vector<string> removeDupWord(string str)
    {
        vector<string> ans;
        string word = "";
        for (auto x : str) 
        {
            if (x == ' ')
            {
                ans.push_back(word);
                // cout << word << endl;
                word = "";
            }
            else {
                word = word + x;
            }
        }
        ans.push_back(word);
        // cout << word << endl;
        return ans;
    }
    bool wordPattern(string pattern, string s) {
        map<int, vector<int>> umap;
        for(int i=0;i<pattern.length();i++)
        {
            umap[pattern[i]-97].push_back(i);
        }
        int x=0;
        vector<string> words=removeDupWord(s);
        x =words.size();
        if(x<pattern.length())
            return 0;
        set<string> mapp;
        for(auto it: umap)
        {
            string w=words[it.second[0]];
            for(auto itr: it.second)
            {
                if(w==words[itr] && mapp.find(w)==mapp.end())
                    x--;
            }
            mapp.insert(w);
            
        }
        cout<<x<<endl;
        if(x==0)
        return true;
        return false;
    }
};