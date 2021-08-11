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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        
        ListNode *p=head,*q=NULL,*r=NULL,*d=NULL;
        int count=1,count2=left;
        while(count<left)
        {
            ListNode * newNode= new ListNode(p->val);
            if(d==nullptr)
                d=newNode;
            else
            {
                ListNode* temp = d;
                while(temp->next != NULL)
                  temp = temp->next;
                temp->next = newNode;
            }
            p=p->next;
            
            count++;
        }
        ListNode * g=NULL;
        while(count2<=right)
        {
            r=q;
            q=p;
            p=p->next;
            q->next=r;
            count2++;
        }
        
        while(q!=nullptr)
        {
            ListNode * newNode= new ListNode(q->val);
            if(d==nullptr)
                d=newNode;
            else
            {
                ListNode* temp = d;
                while(temp->next != NULL)
                  temp = temp->next;
                temp->next = newNode;
            }
            //cout<<q->val<<" ";
            q=q->next;
        }
        while(p!=nullptr)
        {
            ListNode * newNode= new ListNode(p->val);
            if(d==nullptr)
                d=newNode;
            else
            {
                ListNode* temp = d;
                while(temp->next != NULL)
                  temp = temp->next;
                temp->next = newNode;
            }
            p=p->next;
        }
        

        return d;
    }
};