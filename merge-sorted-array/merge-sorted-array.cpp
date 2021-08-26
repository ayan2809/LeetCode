class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=nums1.size()-1;
        if(n==0)
            return;// nums1;
        if(m==0)
        {
            nums1=nums2;
            return;
        }
        int j=n-1,i=m-1;
        while( i>-1 && j>-1)
        {
            
            if(nums1[i]>nums2[j])
            {
                cout<<nums1[i]<<" "<<nums2[j]<<endl;
                nums1[k--]=nums1[i--];
            }
            else
            {
                cout<<nums1[i]<<" "<<nums2[j]<<endl;
                nums1[k--]=nums2[j--];
            }
        }
        while(j>-1)
        {
            nums1[k--]=nums2[j--];
        }
        
        
    }
};