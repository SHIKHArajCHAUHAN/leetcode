/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        map<ListNode*,bool> ankit;
         while(headA!=NULL)
            {
             ankit[headA]=true;
             headA=headA->next;
              }
        while(headB!=NULL)
        {
            if(ankit[headB]==true)
                return headB;
            else
                headB=headB->next;
        }
        return NULL;
        
    }
};