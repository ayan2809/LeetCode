class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        vector<int> left;
        vector<int> right;
        int maxil=-1;
        int maxir=INT_MAX-1,m=flowerbed.size()-1;
        int out=0;
        for(int i=0;i<flowerbed.size();i++)
        {
            if(flowerbed[i]==1)
            maxil=max(i, maxil);
            left.push_back(maxil);
            if(flowerbed[m-i]==1)
            maxir=min((m-i), maxir);
            right.push_back(maxir);
        }
        reverse(right.begin(), right.end());
        for(int i=0;i<=m;i++)
        {
            if((abs(left[i]-i)>=2 )&& (abs(i-right[i])>=2 ))
            {
                n--;
                int x=left[i];
                int j=i;
                while(left[j]==x && j<m)
                {
                    if(left[j]!=x)
                        break;
                    left[j++]=i;
                }
                left[j]=i;
            }
            else if((left[i]==-1 ) && (abs(i-right[i])>=2 ))
            {
                n--;
                int x=left[i];
                int j=i;
                while(left[j]==x && j<m)
                {
                    if(left[j]!=x)
                        break;
                    left[j++]=i;
                }
                left[j]=i;
            }
            else if((abs(left[i]-i)>=2 ) && (right[i]==INT_MAX-1 ))
            {
                n--;
                int x=left[i];
                int j=i;
                while(left[j]==x && j<m)
                {
                    if(left[j]!=x)
                        break;
                    left[j++]=i;
                }
                left[j]=i;
            }
            else if(left[i]==-1 && right[i]==INT_MAX-1)
            {
                n--;
                int x=left[i];
                int j=i;
                while(left[j]==x && j<m)
                {
                    if(left[j]!=x)
                        break;
                    left[j++]=i;
                }
                left[j]=i;
            }
        }
        cout<<endl;
        for(auto it: left)
        {
            cout<<it<<" ";
        }
        cout<<endl;
        if(n<=0)
        return true;
        return false;
    }
};