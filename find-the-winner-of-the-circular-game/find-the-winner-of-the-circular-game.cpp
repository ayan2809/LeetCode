class Solution {
public:
    int ans;
    void solve(vector<int> v,int k, int index)
    {
        if(v.size()==1)
        {
            ans=v[0];
            return;
        }
        index=(index+k)%v.size();
        v.erase(v.begin()+index);
        solve(v,k,index);
    }
    int findTheWinner(int n, int k) {
        vector<int> input;
        for(int i=1;i<=n;i++)
        {
            input.push_back(i);
        }
        solve(input, k-1, 0);
        return ans;
        
    }
};