两个逆序存储的链表，每个节点存一位数字。把两数相加，结果也返回逆序链表。
例：l1 = [2,4,3]，l2 = [5,6,4]
代表 342 + 465 = 807 → 输出 [7,0,8]
  
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2){
  ListNode* dummy = new ListNode();
  ListNode* cur = dummy;
  int carry = 0;
  while(l1 || l2 || carry != 0){
    int v1 = l1 ? l1->val : 0;
    int v2 = l2 ? l2->val : 0;
    int sum = v1 + v2 + carry;
    carry = sum / 10;
    cur->next = new ListNode(sum % 10);
    cur = cur->next;
    if(l1) l1 = l1->next;
    if(l2) l2 = l2->next;
  }
  return dummy->next;
 }
