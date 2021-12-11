#define ll long long
class Solution {
public:
    bool isPalindrome(ll x) {
        //bool check=false;
        ll  y=0;
         if(x<0)
         {
             return false;
         }
        ll  n=x;
        
        while(x!=0)
        {
            ll  d=x%10;
            y=y*10+d;
            x=(ll)x/10;
        }
        //cout<<y<<n<<endl;
        if(y==n)
        {
            return true;
        }
        else
            return false;
    }
};