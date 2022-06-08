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
    int getDecimalValue(ListNode* head) {
        vector<int> num;
        int ans=0;
      while(head!=NULL){
          num.push_back(head->val);
          head=head->next;
          
      } 
        reverse(num.begin(),num.end());
        for(int i=0;i<num.size();i++){
            ans=ans+num[i]*pow(2,i);
        }
        return ans; 
    }
};