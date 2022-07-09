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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int n1=0;
        int n2=0;
        ListNode *x1= l1;
        ListNode *x2= l2;
        
        while(l1!=nullptr)
        {
            n1++;
            l1=l1->next;
        }
        while(l2!=nullptr)
        {
            n2++;
            l2=l2->next;
        }
        int x=max(n1,n2);
        vector<int> a1(x,0);
        vector<int> a2(x,0);
        int f=x-1;
        for(int i=0;i<x;i++)
        {
            if(f<n1)
            {
                a1[i]=x1->val;
                x1=x1->next;
            }
            if(f<n2)
            {
                a2[i]=x2->val;
                x2=x2->next;
            }
            f--;
        }
        int carry=0;
        ListNode * ans= nullptr;
        ListNode * out= nullptr;
        vector<int> out2(x+1,0);
        for(int i=x;i>0;i--)
        {
            int sum=a1[i-1]+a2[i-1]+carry;
            if(sum>9)
                carry=1;
            else
                carry=0;
            out2[i]=sum%10;            
        }
        out2[0]=carry;
        
        for(int i=0;i<=x;i++)
        {
            if(i==0 && out2[i]==0)
                continue;
            if(ans==nullptr)
            {
                ans=new ListNode(out2[i]);
                out=ans;
            }
            else
            {
                ListNode * x3= new ListNode(out2[i]);
                ans->next= x3;
                ans=ans->next;
            }
        }
        // for(auto it: a2)
        //     cout<<it<<" ";
        
        return out;
    }
};