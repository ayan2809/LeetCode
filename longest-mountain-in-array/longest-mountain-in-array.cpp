class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int maxi=0;
        for(int i=1;i<arr.size()-1;)
        {
            //int count=1;
            if(arr[i]>arr[i-1] && arr[i+1]<arr[i])
            {
                
                int count=1;
                int j=i;
                while(j>=1 && arr[j]>arr[j-1])
                {
                    j--;
                    count++;
                }
                while(i<arr.size()-1 && arr[i]>arr[i+1])
                {
                    i++;
                    count++;
                }
                
                maxi=max(maxi, count);
            }
            else
            {
                i++;
            }
        }
        return maxi;
    }
};