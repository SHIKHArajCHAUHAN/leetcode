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
        vector<int>ans;
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
        return head;
    }
};