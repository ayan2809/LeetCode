class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(n==1)
            return 1;
        map<int, int> m1;
        map<int, int> m2;
        for (auto it: trust)
        {
            m1[it[0]]+=1;
            m2[it[1]]+=1;
            // cout<<it[0]<<endl;
        }
        int x=-1,y=n;
    
        for(auto it: m2)
        {
            // cout<<it.second<<endl;
            if(it.second==n-1)
            {
                //cout<<m1.find(it.first)<<endl;
                auto itr=m1.find(it.first);
                if( itr == m1.end())
                {
                    x=it.first;
                    break;
                }
            }
        }
        return x;
        
    }
};