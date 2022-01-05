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
    ListNode* oddEvenList(ListNode* head) {
        if(head==nullptr)
            return head;
        list<int> ans;
        ListNode * p=nullptr,*q,*r=nullptr, *g;
        int i=0,j=0;
        while(head!=nullptr)
        {
            if(i%2==0){
                 ListNode *temp=new ListNode(head->val);
                if(p==nullptr)
                {
                    p=temp;
                    q=p;
                }
                else
                {
                    p->next=temp;
                    p=p->next;
                }
            }
                // ans.push_front(head->val);}
            else
            {
                ListNode *temp=new ListNode(head->val);
                if(r==nullptr)
                {
                    r=temp;
                    g=r;
                }
                else
                {
                    r->next=temp;
                    r=r->next;
                }
            }
                // ans.push_back(head->val);
            
            i++;
            head=head->next;
        }
//         ListNode * p=nullptr,*q;
//         for(list<int>::iterator it=ans.rbegin(); it != it.rend(); --it)
//         {
            
            // ListNode *temp=new ListNode(*it);
            // if(p==nullptr)
            // {
            //     p=temp;
            //     q=p;
            // }
            // else
            // {
            //     p->next=temp;
            //     p=p->next;
            // }
            //j--;
       // }
        if(g!=nullptr)
            p->next=g;
        return q;
        
    }
};