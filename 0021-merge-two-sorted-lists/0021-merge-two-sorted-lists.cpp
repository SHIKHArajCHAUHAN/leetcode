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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        vector<int> ans;
        ListNode *ptr=list1;
        ListNode*ptr2=list1;
        ListNode *ptr3=list1;
        if(list1==NULL) return list2;
        if(list2==NULL) return list1;
        while(list1->next!=NULL){
            list1=list1->next;
            
        }list1->next=list2;
        while(ptr!=NULL){
          ans.push_back(ptr->val);
            ptr=ptr->next;
        } 
        sort(ans.begin(),ans.end());
        //1,1,2,3,4,4
       // int n=ans.size();
        for(int i=0;i<ans.size();i++){
            ptr2->val=ans[i];
            ptr2=ptr2->next;
        }return ptr3;
        
            
        
    }
};