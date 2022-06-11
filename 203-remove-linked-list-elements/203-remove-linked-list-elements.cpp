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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode*del,*cur,*prev,*next;
        while(head!=NULL &&head->val==val){
            
           del=head;
            head=head->next;
            delete del;
            
        }
        if(head==NULL||head->next==NULL){
            return head;
        }
        prev=head;
        cur=head->next;
        while(cur!=NULL){
            if(cur->val==val){
                prev->next=cur->next;
                delete (cur);
                cur=prev->next;
                
            }
            else
            {
                prev=prev->next;
                cur=cur->next;
            }
        }
        return head;
    }
};