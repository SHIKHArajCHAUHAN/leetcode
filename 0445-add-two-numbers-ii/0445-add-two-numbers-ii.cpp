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
   ListNode *reverse(ListNode *head){
        if(head == NULL)return NULL;
        ListNode *currnode = head;
        ListNode *nextnode = head;
        ListNode *prevnode = NULL;
        while(currnode!=NULL){
            nextnode = currnode->next;
            currnode->next = prevnode;
            prevnode = currnode;
            currnode = nextnode;
        }
        head = prevnode;
        return head;
    }
 
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode *temp1 = reverse(l1);
        ListNode *temp2 = reverse(l2);
        ListNode *dummy = new ListNode(-1);
        ListNode *p = dummy;
        int carry = 0;
        while(temp1 && temp2){
            int sum = temp1->val + temp2->val + carry;
            dummy->next = new ListNode(sum%10);
            carry = sum/10;
            dummy = dummy->next;
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
        while(temp1){
            int sum = temp1->val + carry ;
            dummy->next = new ListNode(sum%10);
            dummy = dummy->next;
            carry = sum/10;
            temp1 = temp1->next;
        }
        while(temp2){
            int sum = temp2->val + carry;
            dummy->next = new ListNode(sum%10);
            dummy = dummy->next;
            carry = sum/10;
            temp2 = temp2->next;
        }
        if(carry>0){
            dummy->next = new ListNode(carry);
        }
        ListNode *dip = p->next;
        ListNode *ans = reverse(dip);
        return ans;
    }
};