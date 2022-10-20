class Solution {
public:
    int commonFactors(int a, int b) {
        unordered_map<int, int> umap;
        for(int i=1;i<a;i++)
        {
            if(a%i==0)
            umap[i]=1;
        }
        for(int i=1;i<b;i++)
        {
            if(b%i==0)
                umap[i]+=1;
        }
        int count=0;
        for(auto it: umap)
        {
        
            if(it.second==2)
                count++;
        }
        if(a%b==0 || b%a==0)
            count++;
        return count;
    }
};