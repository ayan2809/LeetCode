/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        // if(head==NULL)
        // {
        //     return h;
        // }
        // vector<int> a;
        // while(head!=NULL)
        // {
        //     auto it=std::find(a.begin(),a.end(),head->val);
        //     if(it!=a.end())
        //     {
        //         return true;                
        //     }
        //     a.push_back(head->val);
        //     head=head->next; 
        // }
        int initial=2147473647;
        int value=2147473647;
        while(head!=NULL)
        {
            if(head->val>=initial)
            {
                return head;
            }
            head->val=value++;
            head=head->next;
        }
        return head;
    }
};