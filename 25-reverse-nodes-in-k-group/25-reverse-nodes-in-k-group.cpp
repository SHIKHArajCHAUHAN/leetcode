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
    int len(ListNode *root)
    {
       // if(root==   NULL) return 0;
        int l=0;
        while(root!=NULL)
        {
            root=root->next;
            l++;
        }return l;
    }
    ListNode* reverseKGroup(ListNode* head, int k) {
     if(len(head)<k) return head;
       // if(head==NULL) return head;
       ListNode* next=NULL;
        ListNode* cur=head;
        ListNode*prev=NULL;
        int count=0;
        while(cur!=NULL && count<k )
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
            count++;
        }if(next!=NULL)
        {
            head->next=reverseKGroup(next,k);
        }
        return prev;
    }
};