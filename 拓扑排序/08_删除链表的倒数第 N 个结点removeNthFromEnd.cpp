ListNode* removeNthFromEnd(int n, ListNode* head){
  ListNode* dummy = new ListNode(0);
  dummy->next = head;
  ListNode* fast = dummy;
  ListNode* slow = dummy;
  for(int i = 0; i < n ;i++){
    fast = fast->next;
  }
  while(fast){
    fast = fast->next;
    slow = slow->next;
  }
  ListNode* det = slow->next;
  slow = slow->next->next;
  delet det;
  return dummy->next;
}
