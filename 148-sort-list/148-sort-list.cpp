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