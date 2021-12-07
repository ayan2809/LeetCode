    class Solution {
      public:
         ListNode* deleteMiddle(ListNode* head){
    
          if(!head or !head->next) return 0;
    
          ListNode *slow=head, *fast= head, *prev=0;
    
	     // Fetching the middle node of LInked List       - Part 1
          while (fast and fast->next)
                     prev=slow , slow= slow->next , fast = fast->next->next ;
    
	      //Deleting the mid using prev        - Part 2
          prev->next = slow->next;
          return head;
    
        }
    };