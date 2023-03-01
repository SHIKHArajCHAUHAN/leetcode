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
    ListNode* partition(ListNode* head, int x) {
       /*vector<int>v1,v2;
        while(head)
        {
            if(head->val<x)v1.push_back(head->val);
            else v2.push_back(head->val);
        }
        ListNode *temp=new ListNode(v1[0]);
        ListNode *ans=temp;
        for(int i=1;i<v1.size();i++)
        {
            ListNode *temp2=new ListNode(v1[i]) ;
            temp->next=temp2;
        }
         for(int i=0;i<v2.size();i++)
        {
            ListNode *temp2=new ListNode(v2[i]) ;
            temp->next=temp2;
        }
        return ans;*/
        ListNode*list1=new ListNode(0);
         ListNode*list2=new ListNode(0);
        ListNode*l1=list1;
        ListNode*l2=list2;
        while(head)
        {
            if(head->val<x)
            {
                l1->next=head;
                l1=l1->next;
            }
            else
            {
                l2->next=head;
                l2=l2->next;
            }
            head=head->next;
        }
        l1->next=list2->next;
        l2->next=NULL;
        return list1->next;
    }
};