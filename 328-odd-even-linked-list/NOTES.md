}
}
i++;
head=head->next;
}
​
if(g!=nullptr)
p->next=g;
return q;
}
};
```
This code does not work
​
```
/**
* Definition for singly-linked list.
* struct ListNode {
*     int val;
*     ListNode *next;
*     ListNode() : val(0), next(nullptr) {}
*     ListNode(int x) : val(x), next(nullptr) {}
*     ListNode(int x, ListNode *next) : val(x), next(next) {}
* };
*/
class Solution {
public:
ListNode* oddEvenList(ListNode* head) {
if(head==nullptr)
return head;
//list<int> ans;
ListNode * p=nullptr,*q,*r=nullptr, *g;
int i=0,j=0;
while(head!=nullptr)
{
if(i%2==0){
ListNode *temp=new ListNode(head->val);
if(p==nullptr)
{
p=temp;
q=p;