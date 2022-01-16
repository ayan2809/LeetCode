class Solution {
public:
    int minMoves(int target, int maxDoubles) {
        int ans=0;
        while(target>1)
        {
            if(target==1)
                break;
            
            if(maxDoubles==0)
            {
                ans+=target-1;
                target=1;
                continue;
            }
            if(target%2==0 && maxDoubles>0)
            {
                maxDoubles-=1;
                target/=2;
            }
            else 
                target-=1;
            ans++;
        }
        return ans;
    }
};