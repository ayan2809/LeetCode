class Solution {
public:
    vector<int> sumZero(int n) {
        //int k=n/2;
        vector<int> out;
        if(n%2!=0)
        {
            out.push_back(0);
            n-=1;
        }
        int k=n/2;
        for(int i=1;i<=k;i++)
        {
            out.push_back(i);
            out.push_back(-1*i);
        }
        return out;
    
    }
};