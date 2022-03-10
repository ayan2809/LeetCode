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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry;
        ListNode *p=l1,*q=l2;
        int len1=0,len2=0;
        while(p!=NULL)
        {
            len1++;
            p=p->next;
        }
        
        while(q!=NULL)
        {
            len2++;
            q=q->next;
        }
        ListNode *first=l1;
        ListNode *second =l2;
        ListNode *store=NULL;
        if(len1>=len2)
        {
            int carry=0; 
            while(l1!=NULL)
            {
                if(l1->next==NULL)
                    store=l1;
                int sum=0;
                if(l2!=NULL)
                 sum=l1->val+l2->val+carry;
                else
                    sum=l1->val+carry;
                if(sum>9)
                {
                    l1->val=sum%10;
                    carry=1;
                }
                else
                {
                    l1->val=sum;
                    carry=0;
                }
                if(l2!=NULL)
                    l2=l2->next;
                l1=l1->next;
            }
            if(carry==1)
            {
                ListNode * temp=new ListNode(carry);
                store->next=temp;
            }
            return first;
        }
        else
        {
            int carry=0; 
            while(l2!=NULL)
            {
                if(l2->next==NULL)
                    store=l2;
                int sum=0;
                if(l1!=NULL)
                 sum=l1->val+l2->val+carry;
                else
                    sum=l2->val+carry;
                if(sum>9)
                {
                    l2->val=sum%10;
                    carry=1;
                }
                else
                {
                    l2->val=sum;
                    carry=0;
                }
                if(l1!=NULL)
                    l1=l1->next;
                l2=l2->next;
            }
            if(carry==1)
            {
                ListNode * temp=new ListNode(carry);
                store->next=temp;
            }
        }
        
        
        
        return second;
    }
};