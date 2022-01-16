class Solution {
public:
    int maxDistToClosest(vector<int>& seats) {
        vector<int> left;
        vector<int> right;
        int maxil=-1;
        int maxir=INT_MAX-1,n=seats.size()-1;
        int out=0;
        for(int i=0;i<seats.size();i++)
        {
            if(seats[i]==1)
            maxil=max(i, maxil);
            left.push_back(maxil);
            if(seats[n-i]==1)
            maxir=min((n-i), maxir);
            right.push_back(maxir);
        }
        reverse(right.begin(), right.end());
        
        // for(auto it: left)
        //     cout<<it<<" ";
        // cout<<endl;
        // for(auto it: right)
        //     cout<<it<<" ";
        // cout<<endl;
        vector<int> ans;
        for(int i=0;i<seats.size();i++)
        {
            if(left[i]==-1)
            {
                ans.push_back(abs(right[i]-i));
            }
            else if(right[i]==INT_MAX-1)
            {
                ans.push_back(abs(left[i]-i));
            }
            else
            {
                ans.push_back(min(abs(left[i]-i),abs(i-right[i])));
            }
            
        }
        for(auto it: ans)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        return *max_element(ans.begin(),ans.end());
    }
};