题目
将两个升序链表 l1、l2 合并成一个新升序链表，返回新链表头。
示例：
l1 = [1,2,4], l2 = [1,3,4]
输出：[1,1,2,3,4,4]

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
  ListNode* dummy = new ListNode();
  ListNode* cur = dummy;
  while(l1 && l2){
    if(l1->val <= l2->val){
      cur->next = l1;
      l1 = l1->next;
    }
    else{
      cur->next = l2;
      l2 = l2->next;
    }
    cur = cur->next;
  }
  if(l1) cur->next = l1;
  if(l2) cur->next = l2;
  return dummy->next;
}
