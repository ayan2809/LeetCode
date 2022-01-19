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
    int pairSum(ListNode* head) {
        vector<int> a;
        while(head!=NULL)
        {
            a.push_back(head->val);
            head=head->next;
        }
        int i=0,j=a.size()-1;
        int maxi=INT_MIN;
        for(int i=0;i<a.size()/2;i++)
        {
            if(i>j)
                break;
            maxi=max(maxi,(a[i]+a[j]));
            j--;
        }
        return maxi;
    }
};