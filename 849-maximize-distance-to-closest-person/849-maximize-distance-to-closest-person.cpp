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
        int answer=0;
        vector<int> ans;
        for(int i=0;i<seats.size();i++)
        {
            if(left[i]==-1)
            {
                answer=max(answer,abs(right[i]-i));
            }
            else if(right[i]==INT_MAX-1)
            {
                answer=max(answer,abs(left[i]-i));
            }
            else
            {
                answer=max(answer,min(abs(left[i]-i),abs(i-right[i])) );
            }
            
        }
        return answer;
       
    }
};