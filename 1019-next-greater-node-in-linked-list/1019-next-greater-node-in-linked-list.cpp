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
    vector<int> nextLargerNodes(ListNode* head) {
   /*  vector<int> ans;
        
      while(head!=NULL)
      {
          ans.push_back(head->val);
          head=head->next;
      } 
        for(int i=0;i<ans.size();i++)
        {
            bool exist=0;
          for(int j=i+1;j<ans.size();j++)
          {
              if(exist==0)
              {
                  if(ans[i]<ans[j])
                  {
                       ans[i]=ans[j];
                             exist =1;
                  }
                 
              }
              else break;
          }
            if(exist==0){
                ans[i]=0;
            }
            
        }
        return ans;*/
        vector<int> ans;
        ListNode *temp;
        while(head!=NULL){
            temp=head->next;
            while(temp!=NULL){
                if(head->val<temp->val)
                { ans.push_back(temp->val);
                break;}
                temp=temp->next;
            }
            if(temp==NULL){
                ans.push_back(0);
            }
            head=head->next;
        }
        return ans;
        
    }
};