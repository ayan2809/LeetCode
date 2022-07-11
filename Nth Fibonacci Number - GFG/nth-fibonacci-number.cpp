// { Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
// User function Template for C++
class Solution {
  public:
  int mod =1000000007;
    long long int nthFibonacci(long long int n){
        long long int dp[n+2];
        if(n==1)
        return 0;
        if(n==2)
        return 1;
        dp[0]=0;
        dp[1]=1;
        for(long long int i=2;i<=n+1;i++)
        {
            // long long int x=dp[i-1]+dp[i-2];
            dp[i]=(dp[i-1]%mod+ dp[i-2]%mod)%mod;
            // cout<<dp[i]<<endl;
        }
        return dp[n];
        
        // return nthFibonacci(n-1)+nthFibonacci(n-2);
    }
};

// { Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}
  // } Driver Code Ends