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
    ListNode* swapPairs(ListNode* head) {
        if(head==NULL||head->next==NULL) return head;
        ListNode *p=head,*q=head->next;
        while(q->next!=NULL&&q->next->next!=NULL)
        {
            swap(p->val,q->val);
            p=p->next->next;
            q=q->next->next;
        }            
        swap(p->val,q->val);

        return head;
     /*   vector<int>ans;
        ListNode *p=head;
        if(head==NULL||head->next==NULL) return head;
        while(p!=NULL)
        {
            ans.push_back(p->val);
            p=p->next;
        }
        for(int i=0;i<ans.size()-1;i+=2)
        {
            swap(ans[i],ans[i+1]);
        }
        p=head;
        for(int i=0;i<ans.size();i++)
        {
           p->val=ans[i];
            p=p->next;
        }
        return head;*/
        
    }
};