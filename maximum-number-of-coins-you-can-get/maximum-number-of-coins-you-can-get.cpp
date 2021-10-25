class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(), piles.end());
        int a1=0,a2=0,a3=0,ans=0;
        for(int i=piles.size()/3;i<piles.size();i+=2)
        {
            ans+=piles[i];
            // if(i%3==0)
            //     a1+=piles[i];
            // else if(i%3==1)
            //     a2+=piles[i];
            // else
            //     a3+=piles[i];
        }
        return ans;
    }
};