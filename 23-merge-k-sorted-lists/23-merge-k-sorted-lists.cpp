/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> nums;
        for(auto it: lists)
        {
            while(it!=NULL)
            {
                nums.push_back(it->val);
                it=it->next;
            }
        }
        mergeSort(nums, 0, nums.size()-1);
        // for(auto it: nums)
        //     cout<<it<<" ";
        ListNode *head=NULL;
        ListNode *ans=NULL;
        if(nums.size()==0)
            return ans;
        for(auto it: nums)
        {
            ListNode *temp= new ListNode(it);
            if(head==NULL)
            {
                head=temp;
                ans=head;
            }
            else
            {
                head->next=temp;
                head=head->next;
            }
        }
        return ans;
    }
};