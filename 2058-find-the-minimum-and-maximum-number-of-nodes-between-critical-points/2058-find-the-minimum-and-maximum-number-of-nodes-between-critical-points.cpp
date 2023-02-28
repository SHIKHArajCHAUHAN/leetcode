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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head==NULL||head->next==NULL||head->next->next==NULL) return {-1,-1};
        ListNode*prev=head;
        ListNode*cur=prev->next;
        ListNode*nxt=cur->next;
        vector<int>v;
        int cnt=1;
        while(nxt)
        {
           if((cur->val>prev->val&&cur->val>nxt->val) ||(cur->val<prev->val&&cur->val<nxt->val))
               v.push_back(cnt);
            cnt++;
            prev=cur;
            cur=nxt;
            nxt=nxt->next;
        }
        if(v.size()<2) return {-1,-1};
        int minn=INT_MAX;
        sort(v.begin(),v.end());
        for(int i=0;i<v.size()-1;i++)
        {
            minn=min(minn,v[i+1]-v[i]);
        }
        return {minn,v[v.size()-1]-v[0]};
    }
};