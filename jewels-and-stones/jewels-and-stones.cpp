class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        map<char, int> ustone;
        for(int i=0;i<stones.size();i++)
        {
            ustone[stones[i]]+=1;
        }
        map<char, int> ujewel;
        for(int i=0;i<jewels.size();i++)
        {
            ujewel[jewels[i]]+=1;
        }
        int ans=0;
        for(auto it: ustone)
        {
            if(ujewel[it.first]!=0)
                ans+=it.second;
        }
        return ans;
    }
};