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
    ListNode* deleteMiddle(ListNode* head) {
        if(head==NULL||head->next==NULL) return NULL;
        int count=0;
        ListNode * ptr= head;
        ListNode *ptr2= head;
        
        while(head!=NULL){
            count++;
            head=head->next;
        }
        count=count/2;
        for(int i=0;i<count-1;i++){
            ptr=ptr->next;
        } head= ptr->next;
        ptr->next=ptr->next->next;
        delete (head);
        return ptr2;
        
    }
};