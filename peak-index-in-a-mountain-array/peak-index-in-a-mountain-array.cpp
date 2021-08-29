class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int l=0, r=arr.size();
        while(l<r)
        {
            int mid= (l+r)>>1;
            if(arr[mid]<arr[mid+1])
            {
                l=mid+1;
            }
            else
            {
                r=mid;
            }
        }
        return r;
    }
};