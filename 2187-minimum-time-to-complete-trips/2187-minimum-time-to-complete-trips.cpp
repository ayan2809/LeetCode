class Solution {
public:
    long long minimumTime(vector<int>& time, int totalTrips) {
        long long i=*min_element(time.begin(), time.end());
        // long long i=0;
        // long long maxi=*max_element(time.begin(), time.end())+1;
        long long maxi=i*totalTrips;
        long long ans=0;
        // for(;i>=0;i--)
        
        while(i<maxi)
        {
            long long mid=(i+maxi)>>1;
            ans=0;
            for(auto it: time)
            {
                
                ans+=mid/it;
            }
            if(ans<totalTrips)
            {
                i=mid+1;
            }
            else
            {
                maxi=mid;
            }
        }
        return maxi;
//         while(ans!=totalTrips)
//         {
//             ans=0;
//             for(auto it: time)
//             {
                
//                 ans+=i/it;
//             }
//             // cout<<ans<<endl;
//             if(ans>=totalTrips)
//                 return i;
            
//             i++;
//         }
        return 0;
    }
};