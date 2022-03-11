class Solution {
public:
    int len(ListNode *root)
    {
        int count=0;
        while(root!=nullptr)
        {
            count++;
            root=root->next;
        }
        return count;
    }
    ListNode* rotateRight(ListNode* head, int k) {
        
        ListNode * p=head, * q=head;
        if(head==nullptr)
            return head;
        int l=len(p);
        if(k==0 || k%l==0 || l==0)
            return head;
        cout<<k%l<<endl;
        l-=k%l;
        vector<int> g;
        while(l--)
        {
            g.push_back(q->val);
            q=q->next;
        }
        ListNode * temp = q;
        while(q->next!=nullptr)
        {
            q=q->next;
        }
        for(auto it: g)
        {
            ListNode * tt= new ListNode(it);
            if(q==nullptr)
            {
                q=tt;
                temp=q;
            }
            else
            {
                 q->next= tt;
                 q=q->next;
            }
           
        }
        return temp;
    }
};