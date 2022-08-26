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
    ListNode * find(ListNode* head)
    {
        ListNode * slow=head;
        ListNode * fast=head->next;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        }return slow;
    }
    ListNode * merge(ListNode * left,ListNode * right)
    {
        if(left==  NULL&&right==NULL) return NULL;
        if(left==NULL) return right;
        if(right==NULL) return left;
        ListNode * ans=new ListNode(-1);
        ListNode* temp=ans;
        while(left!=NULL&&right!=NULL)
        {
            if(right->val<left->val)
            {
                temp->next=right;
                temp=right;
                right=right->next ;           }
            else 
            {
                temp->next=left;
                temp=left;
                left=left->next;
            }
        }
        while(left!=NULL)
        {
              temp->next=left;
                temp=left;
                left=left->next; 
        }
        while(right!=NULL)
        {
                            temp->next=right;
                temp=right;
                right=right->next;
        }ans=ans->next;
        return ans;
    }
    ListNode* sortList(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode* mid=find(head);
        ListNode* right=mid->next;
        ListNode *left=head;
        
        mid->next=NULL;
        left=sortList(left);
        right=sortList(right);
        ListNode * res=merge(left,right);
        return res;
    }
};