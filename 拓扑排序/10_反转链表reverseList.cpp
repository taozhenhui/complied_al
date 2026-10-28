# LC206 反转链表
题意：把 `1→2→3→4→5` 变成 `5→4→3→2→1`
  
ListNode* reverseList(ListNode* head) {
  ListNode* pre = nullptr;
  ListNode* cur = head;
  while(cur){
    ListNode* temp = cur->next;
    cur->next = pre;
    pre = cur; cur = temp;
  }
  return pre;
}
