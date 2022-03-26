class Solution {
public:
    int search(vector<int>& nums, int target) {
        int f=0,l=nums.size();
        while(l>f)
        {
            int mid=(l+f)>>1;
            //cout<<mid<<endl;
            if(nums[mid]==target)
            {
                //cout<<"HELLO"<<endl;
                return mid;}
            if(nums[mid]<target)
            {
                f=mid+1;
            }
            else
            {
                l=mid;
            }
        }
        return -1;
    }
};