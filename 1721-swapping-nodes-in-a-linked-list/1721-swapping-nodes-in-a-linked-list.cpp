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
    ListNode* swapNodes(ListNode* head, int k) {
        vector<int> ans;
        ListNode *ptr=head;
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }int n=ans.size();
        head=ptr;
        swap(ans[k-1],ans[n-k]);
        for(int i=0;i<n;i++){
            ptr->val=ans[i];
            ptr=ptr->next;
        }
        return head;
        
    }
};