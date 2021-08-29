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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int, int> umap;
        while(head!=nullptr)
        {
            umap[head->val]+=1;
            head=head->next;
            
        }
        ListNode *p, *q;
        for(auto it: umap)
        {
            if(it.second==1)
            {
                ListNode * temp= new ListNode(it.first);
                if(p==nullptr)
                {
                    p=temp;
                    q=p;
                }
                else{
                    p->next=temp;
                    p=p->next;
                }
            }
        }
        return q;
    }
};