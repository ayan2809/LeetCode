class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode * l3=NULL;
        if(l1==nullptr)
            return l2;
        if(l2==nullptr)
            return l1;
        while(l1!=nullptr || l2!=nullptr)
        {
            if(l1==nullptr)
                break;
            if(l2==nullptr)
                break;
            if((l1->val)<(l2->val))
            {
                ListNode *node= new ListNode();
                node->val=l1->val;
                node->next=NULL;
                if(l3==NULL)
                {
                    l3=node;
                }
                else
                {
                    ListNode* temp = l3;
                    while(temp->next != NULL)
                        temp = temp->next;
                    temp->next = node;
                }
                l1=l1->next;
                  
            }
            else
            {
                ListNode *node= new ListNode();
                node->val=l2->val;
                node->next=NULL;
                if(l3==NULL)
                {
                    l3=node;
                }
                else
                {
                    ListNode* temp = l3;
                    while(temp->next != NULL)
                        temp = temp->next;
                    temp->next = node;
                }
                l2=l2->next;
            }
        }
        if(l1!=nullptr)
        {
            while(l1!=NULL)
            {
                ListNode *node= new ListNode();
                node->val=l1->val;
                node->next=NULL;
                if(l3==NULL)
                {
                    l3=node;
                }
                else
                {
                    ListNode* temp = l3;
                    while(temp->next != NULL)
                        temp = temp->next;
                    temp->next = node;
                }
                l1=l1->next;
            }
        }
        if(l2!=nullptr)
        {
            while(l2!=NULL)
            {
            ListNode *node= new ListNode();
                node->val=l2->val;
                node->next=NULL;
                if(l3==NULL)
                {
                    l3=node;
                }
                else
                {
                    ListNode* temp = l3;
                    while(temp->next != NULL)
                        temp = temp->next;
                    temp->next = node;
                }
                l2=l2->next;
            }
        }
        return l3;
            
    }
};