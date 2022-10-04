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
    ListNode* insertionSortList(ListNode* head) {
     ListNode* forward = head -> next;
        while(forward != NULL)
        {
            ListNode *curr = head;
            while(curr != forward)
            {
                if(forward -> val < curr -> val)
                    swap(curr -> val, forward -> val);
                
                curr = curr -> next;
            }
            forward = forward -> next;   
        }
        return head;
   
    }
};