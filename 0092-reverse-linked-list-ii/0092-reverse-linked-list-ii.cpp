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
    void rev(ListNode*s,ListNode*e)
    {
        ListNode*p=NULL,*c=s,*n=s->next;
        while(p!=e)
        {
            c->next=p;
            p=c;
            c=n;
            if(n!=NULL)n=n->next;
        }
    }
    ListNode* reverseBetween(ListNode* head, int left, int right) {
      vector<int>v;
        ListNode* curr=head;
        ListNode* temp=head;
        while(temp)
        {v.push_back(temp->val);
        temp=temp->next;}
       reverse(v.begin()+left-1,v.begin()+right);
       int n=v.size();
       int i=0;
       while(curr && i<n)
       {curr->val=v[i];
       curr=curr->next;
       i++;
       }
       return head;  
    }
};