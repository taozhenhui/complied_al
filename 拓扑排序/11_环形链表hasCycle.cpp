# LC141 环形链表

题意：判断链表是否存在环，存在返回 true，否则 false

bool hasCycle(ListNode *head) {
        ListNode* slow = head;
        ListNode* fast = head;
        while(fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast){
                return true;
            }
        }
        return false;
    }
思路：**快慢指针（floyd 判圈）**

- slow 一次走 1 步，fast 一次走 2 步
- 如果有环：fast 一定会追上 slow
- 如果无环：fast 会走到 nullptr 退出
