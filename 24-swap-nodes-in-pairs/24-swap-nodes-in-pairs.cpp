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
    ListNode* swapPairs(ListNode* head) {
        
        if(head==NULL || head->next==NULL)
            return head;
        ListNode *p=head;
        ListNode *q=head->next;
        while(p->next!=nullptr)
        {
            int temp=p->val;
            p->val=q->val;
            q->val=temp;
            cout<<p->val<<" "<<q->val<<endl;
            if(p->next->next!=nullptr)
            {
                p=p->next->next;
                q=q->next->next;
            }
            else
            {
                break;
            }
        }
        return head;
        
    }
};