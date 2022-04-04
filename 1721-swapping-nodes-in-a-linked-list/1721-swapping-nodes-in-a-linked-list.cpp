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
    ListNode* swapNodes(ListNode* head, int k) {
        int len=0;
        ListNode * p= head;
        ListNode *temp1= NULL;
        ListNode *temp2= NULL;
        
        while(p!=nullptr)
        {
            len++;

            if(len==k)
                temp1=p;
            
            p=p->next;
        }
        p=head;
        while(p!=nullptr)
        {
            

            if(len==k){
                temp2=p;
            break;}
            p=p->next;
            len--;
        }
        int temp=temp1->val;
        temp1->val=temp2->val;
        temp2->val=temp;
        //cout<<temp1->val<<" "<<temp2->val<<endl;
        return head;
    }
};