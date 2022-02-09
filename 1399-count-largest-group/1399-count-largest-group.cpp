class Solution {
public:
    int sum(int n)
    {
        int x=0;
        while(n!=0)
        {
            x+=n%10;
            n=n/10;
        }
        return x;
    }
    int countLargestGroup(int n) {
        unordered_map<int, vector<int>> umap;
        int maxi=-1;
        for(int i=1;i<=n;i++)
        {
            int x=sum(i);
            umap[x].push_back(i);
            // cout<<umap[x].size()<<endl;
            int len= umap[x].size();
            if(len>maxi)
            {
                maxi=umap[x].size();
            }
        }
        int count=0;
        for(auto it: umap)
        {
            if(it.second.size()==maxi)
            {
                count++;
            }
        }
        return count;
    }
};