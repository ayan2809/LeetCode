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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==nullptr)
            return nullptr;
        ListNode * p= head;
        int len=0;
        while(p!=nullptr)
        {
            p=p->next;
            len++;
        }
        cout<<len<<endl;
        ListNode * p1=head;
        ListNode *p2= head->next;
        if(len==n)
        {
            head=head->next;
            return head;
        }
        len=len-1;
        while(p2!=nullptr)
        {
            if(len==n)
            {
                p1->next=p2->next;
                break;
            }
            p1=p1->next;
            p2=p2->next;
            len--;
        }
        return head;
    }
};