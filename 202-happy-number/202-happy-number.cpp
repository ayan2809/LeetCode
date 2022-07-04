class Solution {
public:
    int helper(int n)
    {
        int ans=0;
        while(n!=0)
        {
            int d=n%10;
            ans+=d*d;
            n=n/10;
        }
        return ans;
    }
    bool isHappy(int n) {
        if(n==1 || n==7)
            return true;
        else if(n<=9)
            return false;
        
        while(n>9)
        {
            n=helper(n);
            if(n==1|| n==7)
                return true;
            
        }
        return false;
            
    }
};