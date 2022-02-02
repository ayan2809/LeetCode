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
    int numComponents(ListNode* head, vector<int>& nums) {
        map<int, int> umap;
        for(auto it: nums)
        {
            umap[it]=1;
        }
        int count=umap.size();
        while(head->next!=NULL)
        {
            if(umap[head->val]==1 && umap[head->next->val]==1)
            {
                count--;
            }
            head=head->next;
            // cout<<count<<endl;
            // umap[head->val]++;
        }

        return count;
    }
};