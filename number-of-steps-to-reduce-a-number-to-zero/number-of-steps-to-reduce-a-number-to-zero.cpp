class Solution {
public:
    int numberOfSteps(int num) {
        int ans=0;
        while(num>0)
        {
            if(num<=0)
                break;
            if(num%2!=0)
            {
                ans++;
                num-=1;
               
            }
            else
            {
                ans++;
                num/=2;
            }
        }
        return ans;
    }
};