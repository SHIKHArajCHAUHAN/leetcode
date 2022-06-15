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
    ListNode* deleteDuplicates(ListNode* head) {
        map<int,int> ans;//int1->key    int2->value
        ListNode *p=head;
        int node=0,unique=0;
        while(p!=NULL)
        {
            ans[p->val]++;//  act as count fun ans[1]=1,ans[1]=2 ....
            p=p->next;
            node++;
        }
        p=head;
        ListNode *prev=NULL;
        for(auto i:ans)
        {
            if(i.second==1)
            {
                if(prev==NULL) prev=p;
                else {
                    prev=prev->next;
                }
                p->val=i.first;
                prev =p;
                p=p->next;
                unique++;
            }
        } 
        if(p==head) return NULL;
        if(node==unique) return head;
       prev->next=NULL;
        
        return head;
        
    }
};