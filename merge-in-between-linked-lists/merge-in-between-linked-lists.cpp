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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode * p=list1,*q=list2,*g=list1;
        // while(p->val!=b)
        // {
        //     p=p->next;
        // }
        while(b--)
        {
            p=p->next;
        }
        // while(list1->next->val!=a)
        // {
        //     list1=list1->next;
        // }
        while(a!=1)
        {
            list1=list1->next;
            a--;
        }
        p=p->next;
        
        //q->next=p;
        list1->next=q;
        while(list1->next!=nullptr)
        {
            list1=list1->next;
        }
        list1->next=p;
        return g;
    }
};