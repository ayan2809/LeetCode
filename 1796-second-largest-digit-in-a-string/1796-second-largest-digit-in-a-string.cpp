class Solution {
public:
    int secondHighest(string s) {
       map<int,int> umap;
        for(auto it: s)
        {
            int x=it-'0';
            if(x>=0 && x<=9)
            {
                umap[x]+=1;
            }
        }
        map<int, int>::reverse_iterator itr;
        int count=0;
        for (itr = umap.rbegin(); itr != umap.rend(); itr++) {
            count++;
            if(count==2)
                return itr->first;
            // cout<<itr->first<<endl;
        
        }
        return -1;
        
    }
};