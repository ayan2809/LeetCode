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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) 
    {
        vector<int>dp;
        int i=1;
        int prev=-1;
        while(head!=NULL)
        {
            if(prev!=-1&&head->next!=NULL)
            {
                if(prev<head->val&&head->val>head->next->val)
                {
                    dp.push_back(i);
                }
                else if(prev>head->val&&head->val<head->next->val)
                {
                    dp.push_back(i);
                }
            }
            prev=head->val;
            i++;
            head=head->next;
        }
        if(dp.size()<2)
        {
            return {-1,-1};
        }
        int mx=dp[dp.size()-1]-dp[0];
        int mn=dp[1]-dp[0];
        for(int i=2;i<dp.size();i++)
        {
            mn=min(mn,dp[i]-dp[i-1]);
        }
        return {mn,mx};
    }
};