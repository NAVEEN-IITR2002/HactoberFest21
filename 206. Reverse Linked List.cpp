 ListNode* reverseList(ListNode* head) {
 if(head==NULL || head->next==NULL)
 return head;

     ListNode * reversenode =  reverseList(head->next->next);
     ListNode *temp = head->next->next;

     if(temp){
         temp->next = head->next; 
     } else{
         reversenode= head->next;
     }
     head->next->next = head;
     head->next=NULL;
     return reversenode;
 }