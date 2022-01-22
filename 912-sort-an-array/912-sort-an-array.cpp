class Solution {
public:
    void merge(vector<int> &nums, int si, int mid, int ei)
    {
        int n1=mid-si+1;
        int n2= ei-mid;
        vector<int> L;
        vector<int> R;
        for(int i=0;i<n1;i++)
        {
            L.push_back(nums[i+si]);
        }
        for(int j=0;j<n2;j++)
        {
            R.push_back(nums[mid+j+1]);
        }
        int i=0,j=0,k=si;
        while(i<n1 && j<n2)
        {
            if(L[i]<=R[j])
            {
                nums[k++]=L[i++];
            }
            else
            {
                nums[k++]=R[j++];
            }
        }
        while(i<n1)
        {
            nums[k++]=L[i++];
        }
        while(j<n2)
        {
            nums[k++]=R[j++];
        }
    }
    void mergeSort(vector<int> &nums, int si, int ei)
    {
        if(si>=ei)
        {
            return;
        }
        int mid=si+(ei-si)/2;
        mergeSort(nums, si, mid);
        mergeSort(nums, mid+1, ei);
        merge(nums, si, mid, ei);
        
        
    }
    vector<int> sortArray(vector<int>& nums) {
        mergeSort(nums, 0, nums.size()-1);
        return nums;
    }
};