# LC24 两两交换链表中的节点

题目：给链表，两两交换其中相邻的节点，不能改节点 val，只能改指针。
示例：`1→2→3→4→5→6` → `2→1→4→3→6→5`

ListNode* swapPairs(ListNode* head){
  ListNode* dummy = new ListNode(0);
  dummy->next = head;
  ListNode* cur = dummy;
  while(cur->next != nulltrl && cur->next->next != nulltrl){
    ListNode* a = cur->next;
    ListNode* b = cur->next->next;
    cur->next = b;
    a->next = b->next;
    b->next = a;
    cur = a;
  }
  return dummy->next;
}
