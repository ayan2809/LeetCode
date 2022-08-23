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
    bool isPalindrome(ListNode* head) {
        string s="";
        while(head!=nullptr)
        {
            s+=to_string(head->val);
            head=head->next;
        }
        //int f=0;
        //cout<<s<<endl;
        for(int i=0;i<s.length()/2;i++)
        {
            //cout<<s[i]<<" "<<s[s.length()-1-i]<<endl;
            if(s[i]!=s[s.length()-1-i])
            {
                return false;
            }
        }
        return true;
    }
};