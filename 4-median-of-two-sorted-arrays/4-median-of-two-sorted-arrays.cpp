class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
        double ans;
        int n1=nums1.size(),i=0;
        int n2=nums2.size(),j=0,k=0;
        vector<int> nums3(n1+n2);
        while(i<n1 && j<n2)
        {
            if (nums1[i] < nums2[j])
                nums3[k++] = nums1[i++];
            else
                nums3[k++] = nums2[j++];
        }
         while (i < n1)
            nums3[k++] = nums1[i++];
 
        while (j < n2)
            nums3[k++] = nums2[j++];
        
        int n=n1+n2;
        int sum=0;
        if(n%2==0)
        {
            sum=nums3[n/2]+nums3[n/2-1];
            ans=double(sum)/2;
        }
        else
        {
            sum=nums3[n/2];
            ans=double(sum);
        }
        return ans;
        
    }
};