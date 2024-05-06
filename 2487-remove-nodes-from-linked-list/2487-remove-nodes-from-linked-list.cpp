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
    ListNode* removeNodes(ListNode* head) {
        vector<int> arr;
        while(head!=nullptr)
        {
            arr.push_back(head->val);
            head=head->next;
        }
        vector<int> ans;
        int maxi=arr[arr.size()-1];
        ans.push_back(maxi);
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]<maxi){
                continue;
            }
            else {
                ans.push_back(arr[i]);
                maxi=arr[i];
            }
        }
        ListNode *output = nullptr;
        ListNode *out=nullptr;

        for(int i = ans.size()-1;i>=0;i--)
        {
            if(out==nullptr){
                out = new ListNode(ans[i]);
                output= out;
            }
            else {
                out-> next = new ListNode(ans[i]);
                out = out->next;
            }
        }
        return output;
    }
};