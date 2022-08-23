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
   /* void fn(ListNode* head, int &node)
    {
          if(head==NULL) return;
        while(head!=NULL)
        {
            node++;
            head=head->next;
        }
    }*/
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int node=0;
        if(head==NULL) return NULL;
        ListNode*head1=head;
           while(head1!=NULL)
        {
            node++;
            head1=head1->next;
        }
        node=node-n;
        if(node==0)
        {
            ListNode*ptr=head;
            head=head->next;
            delete (ptr);
            return head;
        }
    
    
        ListNode* p=head;
       ListNode*q=head->next;
        int i=1;
        while (node!=i)
        {
            p=p->next;
            q=q->next;
            i++;
        }
        p->next=q->next;
        delete(q);
        return head;
        
    }
};