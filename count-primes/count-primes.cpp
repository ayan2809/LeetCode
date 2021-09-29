class Solution {
public:
//     bool isPrime(int n)
//     {
        
//         for(int i=2;i*i<=n;i+=2)
//         {
//             if(n%i==0)
//                 return false;
//         }
//         return true;
//     }
    int countPrimes(int n) {
        int x=5000000;
        vector<bool> isPrime(x,true);
        isPrime[0]=false;
        isPrime[1]=false;
        int count=0;
        for(int i=2;i*i<n;i++)
        {
            if(!isPrime[i])
                continue;
            for(int j=i*i;j<n;j+=i)
            {
                isPrime[j]=false;
            }
            
        }
        for(int i=2;i<n;i++)
        {
            if(isPrime[i])
                count++;
        }
        return count;
    }
};