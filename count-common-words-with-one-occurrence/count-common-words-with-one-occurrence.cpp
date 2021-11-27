class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        map<string, int> umap1;
        map<string, int> umap2;
        
        for(auto it: words1)
            umap1[it]+=1;
        for(auto it: words2)
            umap2[it]+=1;
        int count=0;
        for(auto it: umap1)
        {
            if(it.second==1 && umap2[it.first]==1)
                count++;
        }
        return count;
            
    }
};