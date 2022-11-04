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
    ListNode* rotateRight(ListNode* head, int k) {
         if(!head || head->next == NULL)return head;
     ListNode* temp=head;
        int l=0;
        while(temp)
        {
            l++;
            temp=temp->next;
        }
        k = k%l;
        if(k==0)return head;
        l = l-k+1;
        ListNode* p = head;
        ListNode *q;
        while(--l){
            q = p;
            p = p->next;
        }
        q->next = NULL;
        q = p;
        while(p->next != NULL){
            p = p->next;
        }
        p->next = head;
        return q;
    }
};