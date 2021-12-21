class Solution {
public:
    bool isPowerOfTwo(int n) {
        //cout<<n<<" ";
        if(n%2==1 && n>1)
            return false;
        if(n<=0 )
            return false;
        if(n==1)
            return true;
        
        return isPowerOfTwo((int)n/2);
    }
};