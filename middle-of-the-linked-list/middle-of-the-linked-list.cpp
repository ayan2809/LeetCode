class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode *p=head;
        int count=0;
        while(p!=NULL)
        {
            count++;
            p=p->next;
        }
        count=(int)count/2;
        for(int i=0;i<count;i++)
        {
            head=head->next;
        }
        return head;
    }
};