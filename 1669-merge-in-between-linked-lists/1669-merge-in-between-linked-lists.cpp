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
    ListNode* gettail(ListNode*node)
    {
        while(node->next!=NULL) node=node ->next;
        return node;
    }
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode*temp=list1,*an=NULL,*bn=NULL;
        
        int idx=0;
        while(temp!=NULL)
        {
            if(idx==a-1)an=temp;
            else if(idx==b+1)bn=temp;
            temp=temp->next;idx++;
        }
        an->next=list2;
        gettail(list2)->next=bn;
        return list1;
    }
};