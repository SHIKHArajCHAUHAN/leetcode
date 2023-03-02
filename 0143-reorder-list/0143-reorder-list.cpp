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
    ListNode *p = NULL;
    void fn(ListNode *h){
        if(!h) return;
        fn(h->next);
        if(p){
            if(p==h || p->next == h){
                h->next = NULL;
                p = NULL;
            }else{
                h->next = p->next;
                p->next = h;
                p = h->next;
            }
        }
        
    }
    void reorderList(ListNode* head) {
      if(head==NULL) return;
        ListNode*slow=head,*fast=head;
        while(fast!=NULL&&fast->next!=NULL)//mid find kr rhe
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        ListNode* mid=slow;
        ListNode*prev=NULL,*cur=slow,*temp;
        while(cur)//second half ko reverse krne k liy
        {
            temp=cur->next;
            cur->next=prev;
            prev=cur;
            cur=temp;
        }
        ListNode*first=head,*second=prev;
        while(second->next)//yha merge kr rhe hai
        {
            temp=first->next;
            first->next=second;
            first=temp;
            temp=second->next;
            second->next=first;
            second=temp;
        }
    }
};