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
    /*  bool detectLoop(Node* head)
    {
        Node *slow=head;
        Node *fast=head;
        while(fast!=NULL&&fast->next!=NULL)
        {
            slow=slow->next;
            fast=fast->next->next;
        
        if(slow==fast) return true;
        }
     return false;
    }*/
    ListNode *detectCycle(ListNode *head) {
       set<ListNode*> s;
        while(head)
        {
            if(s.find(head)==s.end())
            {
                s.insert(head);
            }
            else
            {
                return head;
            }
            head=head->next;
        }
        return NULL;
    }  
};