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
    int pairSum(ListNode* head) {
        vector<int> ans;
        while(head!=NULL){
            ans.push_back(head->val);
            head=head->next;
        }int i=0,j=ans.size()-1;
        int max=INT_MIN;
        while(i<j){
            if(ans[i]+ans[j]>max){
                max=ans[i]+ans[j];
            }
                i++;
                j--;
            
            
        }
        
        return max;
    }
};