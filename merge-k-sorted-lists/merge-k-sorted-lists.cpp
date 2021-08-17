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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        vector<int> out;
        for(auto it: lists)
        {
            while(it!=nullptr)
            {
                out.push_back(it->val);
                it=it->next;
            }
        }
        ListNode * ans=nullptr,* q=nullptr;
        sort(out.begin(), out.end());
        for(auto it: out)
        {
            ListNode * temp=new ListNode(it);
            if(ans==nullptr)
            {
                ans= temp;
                q=ans;
            }
            else
            {
                ans->next= temp;
                ans=ans->next;
            }
            //ans=ans->next;
            cout<<it<<" ";
        }
        
        
        return q;
    }
};