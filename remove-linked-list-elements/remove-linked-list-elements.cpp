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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode * p = head, *q=head;        
       int position=0,f=0,g=0;
        while(p!=NULL)
        {
            g=0;
            if(p->val==val && position==0)
            {
                if(p->next!=NULL)
                    head=p->next;
                else
                    head=NULL;
                f=1;
                //continue;
            }
           else if(p->next!=NULL )
            {
                if(p->next->val==val)
                {
                ListNode *temp=p->next;
                cout<<temp->val<<endl;
                if(temp->next!=NULL)
                    p->next=temp->next;
                else
                    p->next=NULL;
                delete(temp);
                g=2;
                //length--;
                }
             
            }
            if(f==1)
                position=0;
            else
                position++;
            if(g==2)
                continue;
            else
                p=p->next;
            //position++;
        }
        
        return head;
    }
};