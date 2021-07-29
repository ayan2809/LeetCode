class Solution {
public:
    bool checkIfPangram(string sentence) {
        map<char, int> umap;
        //for(int i=97;)
        for(int i=0;i<sentence.length();i++)
        {
            umap[sentence[i]]+=1;
        }
        int f=0;
        for(auto it: umap)
        {
            if(it.second>=1)
                f++;
        }
        if(f==26)
            return true;
        return false;
    }
};