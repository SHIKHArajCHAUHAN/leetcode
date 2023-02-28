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
    ListNode* removeNodes(ListNode* head) {
        vector<int>v;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            if(v.size()==0) v.push_back(temp->val);
            else{
            while(v.size()&&temp->val>v.back())v.pop_back();
                v.push_back(temp->val);}
            temp=temp->next;
        }
        ListNode *root=new ListNode(v[0]);
        ListNode*t=root;
        for(int i=1;i<v.size();i++)
        {
            t->next=new ListNode(v[i]);
            t=t->next;
        }
        return root;
    }
};