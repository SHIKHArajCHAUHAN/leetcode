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
    ListNode* oddEvenList(ListNode* head) {
       ListNode *temp=head;
        ListNode *temp2=head;
        vector<int>even,odd;
        int i=1;
        while(temp!=NULL)
        {
            if(i%2==0)
                even.push_back(temp->val);
                else odd.push_back(temp->val);
            temp=temp->next;
            i++;
        }
    for(int i=0;i<odd.size();i++)
        {
            temp2->val=odd[i];
        
          temp2=temp2->next;
            
        }
        for(int i=0;i<even.size();i++)
        {
            temp2->val=even[i];
            temp2=temp2->next;
        }
        return head;
        
    }
};