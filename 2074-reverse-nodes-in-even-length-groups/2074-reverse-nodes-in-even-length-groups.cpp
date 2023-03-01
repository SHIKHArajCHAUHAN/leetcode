/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
      ListNode *reverse(ListNode *head) {
     ListNode *p = head, *nxt, *pre = NULL;
        while(p != NULL) {
            nxt = p->next;
            p->next = pre;

            pre = p;
            p = nxt;
        }
        return pre;
}
    ListNode* reverseEvenLengthGroups(ListNode* head) {
       if(!head) return head;

        ListNode *dummy = new ListNode(0);
        ListNode *pre = dummy;
        pre->next = head;
        for(int len = 1; len < 1e5 and head; len++) {
            ListNode *tail = head, *nxtHead;
            int j = 1;
            while(j < len and tail != NULL and tail->next != NULL) {
                tail = tail->next;
                j++;
            }
            nxtHead = tail->next;
            if(j%2 == 0) {
                tail->next = NULL;
                pre->next = reverse(head);
                pre = head;
                head->next = nxtHead;
                head = nxtHead;
            } else {
                pre = tail;
                head = nxtHead;
            }
        }

        return dummy->next;
    }
};