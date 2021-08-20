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
    ListNode* sortList(ListNode* head) {
        ListNode *ans= NULL,*p= NULL;
        vector<int> s;
        while(head!=nullptr)
        {
            s.push_back(head->val);
            head=head->next;
        }
        sort(s.begin(), s.end());
        for(auto it: s)
        {
            ListNode * temp= new ListNode(it);
            if(p==nullptr)
            {
                p=temp;
                ans=p;
            }
            else
            {
                p->next=temp;
                p=p->next;
            }
        }
        // while(head!=nullptr)
        // {
        //     InsertSorted(&ans, head->val)
        //     head=head->next;
        // }
         return ans;
    }
};