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
    int getlen(ListNode *head)
    {
        int len=0;
        while(head)
        {
            len++;
            head=head->next;
        }
        return len;
    }
    vector<ListNode*> splitListToParts(ListNode* head, int k) {
        int n=getlen(head);
        int partsize=n/k;
        int extra=n%k;
        vector<ListNode*>ans;
        ListNode*cur=head,*prev=NULL;
        while(head)
        {
            int eachpartsize=partsize;
            ans.push_back(cur);
            while(eachpartsize)
            {
                prev=cur;
                cur=cur->next;
                eachpartsize--;
            }
            if(extra!=0&&cur!=NULL)
            {
                extra--;
                prev=cur;
                cur=cur->next;
            }
            if(prev!=NULL)
            {
                head=cur;
                prev->next=NULL;
            }
            //head=head->next;
        }
        while(ans.size()!=k)
        {
            ans.push_back(NULL);
        }
        return ans;
    }
};